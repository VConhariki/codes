#include <bits/stdc++.h>
using namespace std;

int no=1,trie[100000][26], end[100000],n,i=0;
char palavra[100];


void imprime(int a,string s){
	
	if(end[a]) cout << s << endl;
	for(int j=0;j<26;j++){
		
		if(trie[a][j] != 0)
			imprime(trie[a][j],s+(char)(j+'a'));
	}
}

void insert(string palavra){

	int v=0,indx;
	
	for(int j=0;j<palavra.size();j++){
	
		indx = palavra[j]-'a';
		if(trie[v][indx] == 0)
			trie[v][indx] = no++;
		v = trie[v][indx];
	}
	
	end[v] = 1;
}

int main(){
	
	puts("Qtd de palavras");
	scanf("%d",&n);
	
	while(i<n){
	
		puts("Insira a palavra");
		scanf("%s",palavra);	
		insert(palavra);
		i++;
	}
	imprime(0,"");
}
