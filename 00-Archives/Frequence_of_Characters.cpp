#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;

    cin>>s;

    int freq[26]={0};

    for(int i=0;i<s.length();i++){  //this part counts the frequency of the alphabet.
        freq[s[i]-'a']++;
        }

    for(int i =0;i<s.length();i++ ){

        if(freq[s[i]-'a'] !=0){
            cout<<s[i]<<":"<<freq[s[i]-'a']<<endl;
            freq[s[i]-'a']=0;
        }
            
            
    }
    return 0;

}

