#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int i,n,len,j,up=0,lw=0,c=0,c1=0;

    cin>>s;
    len=s.size();
    for(i=0; i<len; i++){
        if(s[i]<91)
            up++;
    }
    if((up==len)||((s[0]>91)&&(len-1==up))){
        for(i=0; i<len; i++){
            if(s[i]>91)
                s[i]=s[i]-32;
            else
                s[i]=s[i]+32;
        }
    }
    cout<<s<<endl;




}