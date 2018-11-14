#include <stdio.h>

void printa(int *v,int n){
	
	int i;
	for(i=0;i<n;i++) printf("%d ",v[i]);
	puts("");
}

void Merge(int *v, int ini, int meio, int fim){

	int i=ini,j=meio+1,aux=0,vaux[fim-ini+1]; // n=fim-ini+1

	while(i<=meio && j<=fim){

		if(v[i]<v[j])
			vaux[aux]=v[i++]; // faz i++ no fim da linha
		else
			vaux[aux]=v[j++]; // faz j++ no fim da linha
		aux++;
	}

	while(i<=meio){

		vaux[aux]=v[i++]; // faz i++ no fim da linha
		aux++;
	}

	while(j<=fim){

		vaux[aux]=v[j++]; // faz j++ no fim da linha
		aux++;
	}

	for(i=ini,aux=0; i<=fim;i++,aux++)
		v[i]=vaux[aux];

}

void MergeSort(int *v, int ini, int fim){
	
	int meio;
	if(ini < fim){

		meio = (ini+fim)/2;
		MergeSort(v,ini,meio);
		MergeSort(v,meio+1,fim);
		Merge(v,ini,meio,fim);
	}
}

int main(){

	int n,i,v[20];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++) scanf("%d", &v[i]);
	
	MergeSort(v,0,n-1);
	printa(v,n);
}
