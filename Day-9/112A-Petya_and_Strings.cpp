#include<bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    
    // Convert strings to lowercase
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    
    // Compare strings lexicographically
    int ans = (s1 == s2) ? 0 : (s1 < s2) ? -1 : 1;
    
    cout << ans << endl;
    return 0;
}