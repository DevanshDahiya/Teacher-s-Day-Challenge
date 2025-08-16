#include<bits/stdc++.h>
using namespace std ; 

int main(){
	int x ;
	cin>>x ;

	int step = 0 ; 
	while(x>0){
		if(x >= 5){
			step += 1; 
			x -= 5 ;
		}
		else{
			if(x == 1){
				step += 1 ;
				x -= 1;
			}
			else if(x == 2){
				step += 1; 
				x -= 2;
			}
			else if(x == 3){
				step += 1 ;
				x -= 3 ;
			}
			else{
				step +=1 ; 
				x -= 4;
			}
		}
	}
	cout<<step<<endl; 


	return 0 ;
}