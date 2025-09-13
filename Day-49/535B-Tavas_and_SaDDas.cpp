#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.size();
    long long ans = 0;
    for(int i = 1; i < len; i++){
        ans += (1LL << i);
    }
    string b;
    for(char c : s){
        if (c == '4') b += '0';
        else b += '1';
    }
    long long pos = stoll(b, nullptr, 2);
    cout<< ans + pos + 1 << endl;
    return 0;
}