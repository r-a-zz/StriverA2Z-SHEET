#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;  

    for(int i = 1;i<=N; i++){

        int c = i;

        for(int j=1;j<=i;j++){
            cout<<"*";

            while(c>1){
                cout<<" ";
                c--;
            }
        }
        cout<<endl;
    }
    return 0;
}