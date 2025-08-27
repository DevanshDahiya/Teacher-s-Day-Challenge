#include<bits/stdc++.h>
using namespace std ; 

int main(){
	string s , s1 ;
	cin>>s ; 
	cin>>s1 ;

	int i = 0 , j = 0 ;
	string ans ;

	for (int i = 0; i < s.length(); ++i) {
        ans += (s[i] != s1[i]) ? "1" : "0";
    }
	cout<<ans<<endl; 



	return 0 ;
}