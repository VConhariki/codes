#include<bits/stdc++.h>
using namespace std;

int main(){

	queue<int> fila;
	int op;
	int id;

	while(cin>>op){ //Vamos ler cada operação
		if(op == 0){
			break; //Se operação for 0, o caixa do supermercado quebrou.
		}		

		if(op == 1){ //Alguém chega na fila
			cin>>id; //Lemos o id da pessoa que chegou e colocamos na fila.
			fila.push(id);
		}else if(op == 2){ //O caixa vai atender alguém da fila
			if(fila.empty() == false){ //Se a fila não for vazia, ou seja, tiver alguém na fila
				fila.pop(); //O caixa atende a pessoa na frente da fila, e deletamos essa pessoa da fila.
			}

		}
		
	}

	//Após o caixa quebrar queremos saber as pessoas que ainda estão na fila.
	while(fila.empty() == false){ //Enquanto a fila não for vazia
		int p = fila.front(); //Pego a pessoa na frente da fila e imprimo
		cout<<p<<" "<<endl;

		fila.pop(); //Removo a pessoa que está na frente da fila.
	}

	return 0;
}
