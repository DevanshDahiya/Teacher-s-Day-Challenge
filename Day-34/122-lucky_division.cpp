#include<bits/stdc++.h>
using namespace std ;

int main(){
	int n ; 
	cin>> n ;

	int arr[11] = {4,7,47,74,444,777,447,774,474,747,477};

	for(int i : arr){
		if(n % i == 0){
			cout<<"YES"<<endl;
			return 0 ;
		}
	}
	cout<<"NO"<<endl;

	return 0 ;
}