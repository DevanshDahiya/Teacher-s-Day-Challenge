#include<bits/stdc++.h>
using namespace std ; 

int main(){
	int m , n ; 
	cin>> m >> n ; 

	int domino = 2 ;

	int box = m * n;

	int ans = box / domino ; 

	cout<<ans <<endl; 


	return 0 ;
}