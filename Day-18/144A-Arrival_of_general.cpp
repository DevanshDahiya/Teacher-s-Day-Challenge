#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    int minH = INT_MAX, maxH = INT_MIN;
    int minI = 0, maxI = 0;

    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] > maxH){
            maxH = v[i];
            maxI = i;
        }
        if(v[i] <= minH){ 
            minH = v[i];
            minI = i;
        }
    }

    if(maxI == 0 && minI == n - 1){
        cout << 0 << endl;
    } 
    else{
        int maxSwaps = maxI;
        int minSwaps = (minI < n - 1) ? (n - 1 - minI) : 0;

        if (minI < maxI) {
            minSwaps--;
        }
        cout<<maxSwaps + minSwaps<<endl;
    }

    return 0;
}