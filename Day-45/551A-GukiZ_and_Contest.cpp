#include<bits/stdc++.h>
using namespace std ; 

int main(){
	int n ; 
	cin>> n ;

	vector<int>v(n) ;

	for(int i = 0 ;i < n ; i++){
		cin>>v[i] ;
	}
	for(int i = 0 ; i < n ; i++){
		int sum = 1 ; 
		for(int j = 0 ; j < n ; j++){
			if(v[j] > v[i]) sum++;
		}
		cout<<sum<<" " ;
		// if(i < n -1 ) cout<<" ";
		// else cout<<endl; 
	}



	return 0 ; 
}