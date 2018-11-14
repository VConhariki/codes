#include <stdio.h>

void printa(int *v,int n){
	
	int i;
	for(i=0;i<n;i++) printf("%d ",v[i]);
	puts("");

}

int buscaMenor(int *v, int ini, int fim){

	int i,iMenor=ini,menor=v[ini];
	
	for(i=ini+1;i<=fim-1;i++)
		if(menor > v[i]){
		
			menor = v[i];
			iMenor = i;
		}
	return iMenor;
}

void SelectionSort(int *v, int ini, int fim){
	
	if(ini == fim) return;
	
	int Indicemenor,aux;
	
	Indicemenor = buscaMenor(v,ini,fim);
	
	aux = v[ini];
	v[ini] = v[Indicemenor];
	v[Indicemenor] = aux;
	
	SelectionSort(v,ini+1,fim);
}

int main(){

	int n,i,v[20];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++) scanf("%d", &v[i]);
	
	SelectionSort(v,0,n-1);
	printa(v,n);
}
