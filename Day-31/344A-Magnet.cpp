#include<bits/stdc++.h>
using namespace std ; 

int main(){
	int n ; 
	cin>> n ; 
	int a[n] ;
	int count = 0 ; 
	for(int i = 0 ;  i < n ; i++){
		cin>>a[i] ;
	}
	for(int i = 0 ; i < n ; i++){
		if(a[i] != a[i+1]){
			 count++ ;
		}
	}

	cout<<count<<endl; 

	return 0 ;	
}