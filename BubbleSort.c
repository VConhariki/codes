#include <stdio.h>

void printa(int *v,int n){
	
	int i;
	for(i=0;i<n;i++) printf("%d ",v[i]);
	puts("");

}

void BubbleSort(int *v, int ini, int fim){
	
	int i=0,aux,flag=1,n=fim-ini+1;
	
	while(flag){
	
		flag=0;
		for(i=0;i<n-1;i++){
	
			if(v[i+1]<v[i]){
		
				aux = v[i];
				v[i] = v[i+1];
				v[i+1] = aux;
				flag = 1;
			}
		}
	}
	
	return ;
}
int main(){

	int n,i,v[20];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++) scanf("%d", &v[i]);
	
	BubbleSort(v,0,n-1);
	printa(v,n);

}
