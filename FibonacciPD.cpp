#include <bits/stdc++.h>
using namespace std;

long long x=0, pd[1];

int fibo(int x){

	if(pd[x] > 0) return pd[x];
	return pd[x] = fibo(x-1) + fibo(x-2); 
}

int main(){
	
	pd[1] = 0;
	pd[2] = 1;
	pd[3] = 1;
	
	do{
		cin >> x;
	}while(x<=0);
	
	cout << fibo(x) << endl;

}
