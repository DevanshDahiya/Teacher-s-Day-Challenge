#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    bool foundPrime = false;
    for (int i = n + 1; i <= m; i++) {
        if (isPrime(i)) {
            if (i == m) {
                cout << "YES" << endl;
                return 0;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    
    cout << "NO" << endl; // If no prime is found between n and m
    return 0;
}