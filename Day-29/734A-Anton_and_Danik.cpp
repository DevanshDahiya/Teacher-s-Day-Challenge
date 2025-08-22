#include<bits/stdc++.h>
using namespace std ;

int main(){
	int n ; 
	cin>>n ; 
	string s = "" ;
	cin>>s ; 

	int Acount = 0 , Dcount = 0 ;

	for(int i = 0 ; i < s.length() ; i++){
		char ch = s[i] ;
		if(ch == 'A') Acount++;
		else Dcount++ ;
	}

	(Acount == Dcount)? cout<<"Friendship" : (Acount
		> Dcount) ? cout<<"Anton" : cout<<"Danik" ;

	return 0 ;
}