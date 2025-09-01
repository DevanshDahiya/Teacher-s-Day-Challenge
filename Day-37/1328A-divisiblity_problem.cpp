#include<bits/stdc++.h>
using namespace std ; 

int main(){
	int t ; 
	cin>>t ; 

	while(t--){
		int a , b ;
		int ans = 0 ; 
		cin>> a>>b ;

		if(a % b == 0){
			cout<<0<<endl; 
		}
		else{
			cout<<b - (a%b) <<endl;
		}
	}

	return 0 ;
}