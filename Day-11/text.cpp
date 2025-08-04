#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int t ; 
    cin>> t;

    string s ;
    cin>>s ;

    char ch = s[0] ;
    int count = 0, minE=0 ;
    for(int i = 1  ; i < t ; i++){ 
        if(ch != s[i]){ 
            ch = s[i];
            // count = minE ;
        }
        else count++ ; 

    }

    cout<<count;
    
    return 0 ;
}