#include <stdio.h>

void printa(int *v,int n){
	
	int i;
	for(i=0;i<n;i++) printf("%d ",v[i]);
	puts("");

}

void InsertionSort(int *v, int ini, int fim){

	int i=0, j, aux,n=fim-ini+1;
	for (i; i < n; i++) {
		j = i;
		while (j > 0 && v[j - 1] > v[j]) {
			aux = v[j];
			v[j] = v[j - 1];
			v[j - 1] = aux;
			j--;
		}
	}
}

int main(){

	int n,i,v[20];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++) scanf("%d", &v[i]);
	
	InsertionSort(v,0,n-1);
	printa(v,n);
}
