#include <stdio.h>

void printa(int *v,int n){
	
	int i;
	for(i=0;i<n;i++) printf("%d ",v[i]);
	puts("");
}

void ShellSort(int *v, int ini, int fim){

	int i, j, aux, n=fim-ini+1, h=n;
		
	while (h > 1) {
	
		h /= 2;
		for(i = h; i < n; i++) {
			aux = v[i];
			j = i;
			while (j >= h && aux < v[j-h]){
			
				v[j] = v [j-h];
				j = j-h;
			}
			v [j] = aux;
		}
	}
}


int main(){

	int n,i,v[20];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++) scanf("%d", &v[i]);
	
	ShellSort(v,0,n-1);
	printa(v,n);
}
