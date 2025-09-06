#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    unordered_map<string, int>mp;

    for(int i = 0; i < n; i++){
        string s;
        cin>>s;
        auto it = mp.find(s);
        if(it != mp.end()){
            cout << s << it->second << endl;
            mp[s]++;
        } 
        else{
            mp[s] = 1;
            cout << "OK" << endl;
        }
    }

    return 0;
}