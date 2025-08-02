#include<bits/stdc++.h>
using namespace std ; 



int main(){
	int t ; 
	cin>>t ;
	int ans = 0 ; 
	for(int i = 0 ; i < t ; i++){
		 
		int onecount = 0 ; 
		for(int j = 0 ; j < 3; j++){
			vector<int> v ;
			cin>>v[j] ;
			if(v[j] == 1){
				onecount++ ;
			}
		}
		if(onecount >=2){
			ans++ ; 
		}
	}
	cout<<ans;
	return 0 ; 
}