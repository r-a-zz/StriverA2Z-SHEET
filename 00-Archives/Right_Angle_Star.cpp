#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;  

    for(int i = 1;i<=N; i++){

        for(int j=1;j<=i;j++){
            cout<<"*";

            if(i>j){  //for strict spacing . YOu ca avoid this for no strict spacing and accordingly add a space like this "* ".
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}