#include<bits/stdc++.h>
using namespace std ; 

int main(){
	int n , m ; 
	cin>>n >>m ; 

	for(int i = 1 ; i <= n ; i++){
		string s= "" ;
		if(i % 4 == 0){
			s+='#' ;
			for(int j = 1; j < m; j++){
                s += '.';
            }
		}
		else if(i % 2 == 0 && i % 4 != 0){
			for(int j = 0; j < m-1; j++){
                s += '.';
            }
			s+='#';
		}
		else{
			for(int j = 0; j < m; j++){
                s += '#';
            }
		}
		cout<<s<<endl;

	}


	return 0 ;
}