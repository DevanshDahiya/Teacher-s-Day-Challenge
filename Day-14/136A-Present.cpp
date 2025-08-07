#include<bits/stdc++.h>
using namespace std ; 

int main(){
	int t , k ; 
	cin>>t; 

	vector<int>ans(t + 1);

	for(int i = 1 ; i <= t ; i++){
		cin>> k ; 
		ans[k] = i ; 
	}

	for(int i = 1 ; i < ans.size() ; i++){
		cout<<ans[i] <<" ";
	}

	return 0 ;	
}