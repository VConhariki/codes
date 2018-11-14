#include <stdio.h>

void printa(int *v,int n){
	
	int i;
	for(i=0;i<n;i++) printf("%d ",v[i]);
	puts("");
}

void QuickSort(int *v, int ini, int fim){

	int pivot, aux,i=ini,j=fim;   

	pivot = v[(ini + fim) / 2];	
	//pivot = v[ini];
	//pivot = v[fim];
	
	do{
		while (v[i] < pivot) i++;
		while (v[j] > pivot) j--;
      
		if(i <= j){

			aux = v[i];
			v[i++] = v[j]; // i=i+1, no final da aplicação
			v[j--] = aux; // j=j+1, no final da aplicação
		}

	}while(j > i);
   
	if(ini < j) QuickSort(v,ini,j);
	if(i < fim) QuickSort(v,i,fim);
	return ;
}

int main(){

	int n,i,v[20];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++) scanf("%d", &v[i]);
	
	QuickSort(v,0,n-1);
	printa(v,n);
}
