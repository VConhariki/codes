#include <bits/stdc++.h>
using namespace std;

int n,x,y,j=0;
int mdc(int x, int y);

int main(){

	cin >> n;
        
        while(j<n){

		cin >> x >> y;
		if(x == 0 || y == 0) printf("Nao existe div. por 0\n");
		else{
		        if(x>y) cout << mdc(y,x) << endl;
		        else
				cout << mdc(x,y) << endl;
		}
		j++;
        }

}
int mdc(int x, int y){

      if(x%y==0) return y; 
    
      mdc(y,x%y);   
}
