#include<bits/stdc++.h>
using namespace std ;

int main(){
	int n ; 
	cin>> n; 

	int x_coor = 0 ; 
	int y_coor = 0 ;
	int z_coor = 0 ;

	while(n--){
		int x, y, z ;
		cin>>x>>y>>z ;

		x_coor += x ;
		y_coor += y ; 
		z_coor += z ;
	}

	(x_coor == 0 && y_coor == 0 && z_coor == 0) ? cout<<"YES" : cout<<"NO"<<endl; 


	return 0 ;
}