#include<bits/stdc++.h>
using namespace std ; 

int main(){
	int n ; 
	cin>>n ; 

	vector<int>v(n) ;

	for(int i = 0 ; i < n ; i++){
		cin>>v[i] ;
	}

	int ans = 1 ;
	int i = 1 ; 
	int maxV = 1 ;
	while(i < n){
		if(v[i] >= v[i-1]){
			maxV++;
		}
		else{
			maxV =1 ; 
		}
		ans = max(ans , maxV) ;
		i++; 
	}

	cout<<ans<<endl; 



	return 0 ;
}