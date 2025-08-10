#include<bits/stdc++.h>
using namespace std ; 

int main(){
	int n ; 
	cin>>n ; 

	vector<int> v(n) ; 
	for(int i = 0 ; i < n ; i++){
		cin>>v[i] ;
	}
	int sereja = 0 ; 
	int dima = 0 ; 

	int start = 0 , end = n - 1  ; 
	while(start <=  end){
		if(v[start] >= v[end]){
			sereja += v[start] ;
			start++ ;
			if((v[start] >= v[end]) && (start <=end)){
				dima += v[start] ;
				start++ ;
			} 
			else if((v[start] < v[end]) && (start <=end)){
				dima += v[end] ;
				end--;
			}
		}
		else if(v[start] < v[end]){
			sereja += v[end] ;
			end--; 
			if(v[start] >= v[end] &&(start <=end)){
				dima += v[start] ;
				start++ ;
			} 
			else if((v[start] < v[end]) && (start <=end) ){
				dima += v[end] ;
				end--;
			}
		}
	}
	

	cout<<sereja <<" "<<dima<<endl; 


	return 0 ; 
}