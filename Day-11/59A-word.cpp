#include<bits/stdc++.h>
using namespace std ; 

int main(){
	string s ; 
	cin>>s ; 
	int lowerCount = 0 ; 
	int upperCount = 0 ; 
	for(int i = 0 ; i < s.length() ; i++){
		if(s[i] >= 97) lowerCount++ ;
		if(s[i] >= 65 && s[i] < 91) upperCount++ ;
	}
	if(lowerCount >= upperCount){
		transform(s.begin() , s.end() , s.begin() , ::tolower) ;
	}
	else{
		transform(s.begin() , s.end() , s.begin() , ::toupper) ;
	}

	cout<<s<<endl;



	return 0 ;	
}