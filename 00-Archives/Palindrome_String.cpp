#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string a = s;
    
    for(int i=0;i<s.length()/2;i++)
    {
        char t = s[i];
        s[i]=s[s.length()-1-i];
        s[s.length()-1-i]=t;
    }
    if(s==a)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";

    return 0;
}

