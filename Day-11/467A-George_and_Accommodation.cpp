#include<bits/stdc++.h>
using namespace std ; 

int main(){
	int n ; 
	cin>> n ; 
	int ans = 0 ; 
	for(int i = 0 ; i < n ; i++){
		int p , q ; // p->no of people living in room  and q-> total capacity of the room 
		cin>>p>>q;
		if((q-p) >=2) ans++ ;
	}
	cout<<ans<<endl ; 

	return 0 ;
}