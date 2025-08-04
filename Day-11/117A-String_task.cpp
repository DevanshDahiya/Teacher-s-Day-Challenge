#include<bits/stdc++.h>
using namespace std ;

int main(){
	string s ;
	cin>>s ; 

	string ans = "" ;

	transform(s.begin() , s.end() , s.begin() , ::tolower) ;

	for(int i = 0 ; i < s.length() ; i++){
		char ch = s[i] ; 
		if(ch != 'a' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'e' && ch != 'y'){
			ans+=('.') ;
			ans+=(ch) ;
		}
	}
	cout<<ans<<endl; 

	return 0 ;
}