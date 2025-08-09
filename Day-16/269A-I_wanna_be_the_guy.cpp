#include<bits/stdc++.h>
using namespace std ; 

int main(){
	int n ; 
	cin>>n ; 

	set<int> s ; 

	int p ; 
	cin>>p ; 
	while(p--){
		int ele  ; 
		cin>>ele ; 
		s.insert(ele) ; 
	}

	int q ; 
	cin>>q ; 
	while(q--){
		int ele  ; 
		cin>>ele ; 
		s.insert(ele) ; 
	}
	bool pass = true ;
	for(int i = 1 ; i <= n ; i++){
		if(s.find(i) == s.end()){
			pass = false ; 
			break ;
		}
	}
	if(pass){
		cout<<"I become the guy."<<endl;
	}
	else{
		cout<<"Oh, my keyboard!"<<endl;
	}

	return 0 ; 
}