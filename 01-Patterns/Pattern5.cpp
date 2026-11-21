/*
    *****
    ****
    ***
    **
    *
*/

#include<iostream>
using namespace std;

int main(){
    int i , j, n;
    cout<<"Enter the row Number";
    cin>>n;

    for(i = 1;i <=n; i++){
        for(j=5 ; j>=i; j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}