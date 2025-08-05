#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s ; 
    cin>> s; 
    set<char> st ; 
    for(auto i: s){
        st.insert(i) ;
    }
    int size = st.size() ;
    if(size % 2 == 0) cout<<"CHAT WITH HER!"<<endl; 
    else cout<<"IGNORE HIM!"<<endl; 
    
    return 0 ;
}