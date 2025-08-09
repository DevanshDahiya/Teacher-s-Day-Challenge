#include<bits/stdc++.h>
using namespace std ; 

int main(){
	int n , m ; 
	cin >> n >> m ; 
	
	int intialPos = 1 ; 

	long long  time = 0 ;

	for(int i = 0 ; i < m ; i++){
		int pos  ; 
		cin>>pos ; 
		if(pos >= intialPos){
			time += pos - intialPos ;
		}
		else{
			time += (n - intialPos + pos ) ;
		}
		intialPos = pos  ; 
	}
	cout<<time<<endl; 

	return 0 ; 
}