#include <stdio.h>
void saida(int x, int final);
int main(){
int qtd;//qtd armazena o quantidade de triângulos na base

scanf(" %d", &qtd);//Armazena o valor digitado pelo usuário

saida(qtd,0);//Chama a função recursiva, passando o valor da variável qtd para uma outra variável inteira chamada "x" e o valor 0 para uma variável do tipo inteiro chamada "final"

}

void saida(int x, int final){
final+=3*x;

	if(x==0) printf("%d\n",final);//condição de parada
	else saida(x-1,final);
	
}
