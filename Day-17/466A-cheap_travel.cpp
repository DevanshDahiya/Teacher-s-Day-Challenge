#include<bits/stdc++.h>
using namespace std ; 

int main(){
	int n , m , a ,b ; 
	cin>>n>>m>>a>>b ; 
	int ans = 0 ; 
	if(m > n){
		if(b > n*a) {
			cout<< n*a<<endl; 
		}
		else{
			cout<<b <<endl;
		}
	}
	else{
		int res = n / m ; 
		int rem = n % m ;

		if(res*b >=n*a ){
			cout<<n*a<<endl; 
		}

		else 
		{
			if(rem*a < b){
				cout<<res*b + rem*a<<endl; 
			}
			else{
				cout<<res*b + b <<endl;
			}
		}
		
	}

	
	return 0 ; 
}