#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int pos = -1;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] =='0'){
            pos = i;
            break;
        }
    }
    if(pos != -1){
        for (int i= 0; i < s.size(); i++){
            if(i != pos){
                cout<< s[i];
            }
        }
    } 
    else{
        for(int i = 0; i < s.size() - 1; i++) {
            cout<< s[i];
        }
    }
    
    return 0;
}