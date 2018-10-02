#include <bits/stdc++.h>
using namespace std;
#define MAX 9999 // how many numbers you want test

int prime(int x);

int main(){


	int x=2,n,m;
	
	for(int z=0;z<MAX;z++){

			x+=2; // only works for even numbers bigger than 2 
	
		if(prime(x/2)) printf("%d = %d + %d\n",x,x/2,x/2); // if the half of the number is a prime one, you found the answer
		else{
	
			for(int i=0;i>-1;i++){ // if you get in a infinite looping, congratulations you've break the conjecture
				if(prime(x-i)){
					n=x-i; 
					if(x-n != 1 && prime(x-n)) //check if the found numbers are prime, if they are you got the answer
						break;
				}		
			}
			printf("%d = %d + %d\n",x,n,x-n);
	
		}
	}
}

int prime(int x){ // check prime

	int flag=1;
	
	for(int i=2;i<=sqrt(x);i++){
	
		if(x%i == 0){
			flag = 0;
			break;
		}
	}
	
	return flag;
}


