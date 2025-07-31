#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int t ; 
    cin>>t ;
    vector<string> v ; 
    for(int i = 0 ; i < t ; i++){
        string s;
        cin>> s ;
        int n = s.length();
        string ans ;
        ans = "" ;
        if(n > 10) {
            ans += s[0] ;
            ans += to_string(n - 2);
            ans += s[n -1] ;
            v.push_back(ans) ;
            
        }
        else{
            v.push_back(s) ;
        }
    }

    for(auto i : v){
        cout<<i<<endl; 
    }


    return 0 ;
}