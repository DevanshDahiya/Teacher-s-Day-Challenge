#include<bits/stdc++.h>
using namespace std ; 

int main(){
	int n ; 
	cin>> n;

	vector<int>v (n) ;
	for(int i = 0 ;i < n ; i++){
		cin>>v[i] ;
	}

	int minV = v[0] ;
	int maxV = v[0] ;
	int ans = 0 ;

	for(int i = 1 ; i < n ; i++){
		if(maxV < v[i]) {
			ans++ ;
			maxV = v[i] ;
		}
		else if(minV > v[i]){
			ans++; 
			minV = v[i] ;
		}
	}

	cout<<ans<<endl; 

	return 0 ;
}