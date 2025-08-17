#include<bits/stdc++.h>
using namespace std ;

int main(){
	int k  , n , w ;
	cin>>k >>n>>w; 

	int borrow = 0 ; 
	int newSum = n ; 
	for(int i = 1 ; i <= w ; i++){
		newSum = newSum - i*k ; 
	}

	(newSum < 0) ? cout<<abs(newSum) : cout<<0 ;


	return 0 ;
}