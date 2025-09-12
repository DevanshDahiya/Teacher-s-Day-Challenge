#include<bits/stdc++.h>
using namespace std ; 

int main(){
	string a ; 
	cin>>a ; 

	char z ;

	z = 'a' ;
	int b ,c , d, e,f ,g ; 
	f =  0 ; 
	b = a.size() ;
	for(c = 0 ; c < b ; c++){
		e = a[c] - z ; 
		if(e < 0){
			 e= e*(-1) ;
		}
		d = 26 - e ; 
		g = min(d,e) ;
		f += g ; 
		z = a[c];
	}

	cout<<f ;


	return 0 ;
}