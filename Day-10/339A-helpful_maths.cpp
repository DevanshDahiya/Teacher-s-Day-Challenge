#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;

    cin >> s;

    int i = 0, m = 0, j = s.length() - 1;

    while(m <= j){
        if(s[m] == '+'){
            m++; 
        }
        else if (s[m] == '1'){
            while (i < m && s[i] == '+') i++;
            swap(s[i], s[m]);
            i++;
            m++;
        }
        else if (s[m] == '2'){
            m++; 
        } 
        else{
            while (j > m && s[j] == '+') j--; 
            swap(s[m], s[j]);
            j--;
        }
    }

    cout<<s<< endl;

    return 0;
}