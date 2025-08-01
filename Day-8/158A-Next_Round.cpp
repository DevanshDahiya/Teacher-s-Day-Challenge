#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ; 


int main(){
	int n , k  ;
	cin>> n >> k ; 

	vector<int>v(n) ;

	for (int i = 0; i < n; ++i)
	{
		cin>> v[i] ;
	}

	int  ans = 0 ; 

	int solution = v[k-1] ;
	for(int i = 0 ; i < n ; i++){
		if(v[i] > 0 && v[i] >= solution){
			ans++ ;
		}
	}

	cout<<ans<<endl;

	return 0 ; 
}