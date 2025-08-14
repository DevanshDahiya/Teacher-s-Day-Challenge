#include<bits/stdc++.h>
using namespace std ; 

int main(){
	string s , t ;
	cin>>s ;
	cin>>t ;

	bool ans = false  ; 

	int i = 0 , j = t.length() - 1 ;
	while(i < s.length() && j >= 0 && s.length == t.length()){
		if(s[i] != t[j]){
			ans = false  ; 
			break ;
		}
		ans = true ;
		i++ ; 
		j-- ;
	}
	if(ans) cout<<"YES" <<endl; 
	else cout<<"NO" <<endl;
 
	return 0 ;
}