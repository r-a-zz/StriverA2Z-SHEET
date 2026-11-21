#include<bits/stdc++.h>
using namespace std;

int main (){
    string s;
    char t;
    cin>>s;

    for(int i = 0;i < s.length()/2; i++)
    {
        t=s[i];
        s[i]=s[s.length()-1-i];
        s[s.length()-1-i]=t;
    }
    cout<<s;
    return 0;
}

