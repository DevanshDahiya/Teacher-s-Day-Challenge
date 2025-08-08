#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(4);
    set<int> s; 
    
    for (int i = 0; i < 4; ++i) {
        cin >> v[i];
        s.insert(v[i]) ;
    }

    int n = s.size() ; 
    cout<<4-n <<endl; 
    
    
    return 0;
}