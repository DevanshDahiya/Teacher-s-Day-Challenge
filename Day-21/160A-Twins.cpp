#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n; 
    vector<int> v(n);
    int totalSum = 0;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        totalSum += v[i];
    }

    sort(v.begin(), v.end());

    int val = 0, count = 0; 
    for(int i = n - 1; i >= 0; i--) {
        val += v[i];
        totalSum -= v[i];
        count++;
        if(val > totalSum) {
            cout << count << endl;
            break;
        }
    }
    return 0;
}
