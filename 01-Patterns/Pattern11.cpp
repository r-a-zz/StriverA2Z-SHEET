/*
    1
    01
    101
    0101
    10101....

*/

#include<iostream>
using namespace std;

int main(){
    int i, j,n;
    cout<<"Enter the number of Rows";
    cin>>n;

    for(i = 1;i <= n;i++){
        if(i%2==1){
            for(j= 1;j<=i;j++){
                cout<<j%2;
            }
        }
        if(i%2==0){
            for(j=0;j<i;j++){
                cout<<j%2;
            }
        }
        cout<<"\n";
    }
    return 0;
}