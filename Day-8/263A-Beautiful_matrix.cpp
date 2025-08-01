// #include<iostream>
// #include<vector>
// #include<algorithm>

#include<bits/stdc++.h>

using namespace std ; 


int main(){
	vector<vector<int>>v(5 , vector<int>(5)); 
	int rowIdx , colIdx ;
	for(int i = 0 ;i < 5 ;i++){
		for(int j = 0 ; j < 5; j++){
			cin>>v[i][j] ;

			if(v[i][j] == 1){
				rowIdx = i ; 
				colIdx = j ; 
			}
		}
	}
	int ans = abs(rowIdx - 2) + abs(colIdx - 2) ; 

	cout<<ans <<endl; 




	return 0 ; 
}