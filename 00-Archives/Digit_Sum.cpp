#include<bits/stdc++.h>
using namespace std;

int main(){


    //Digit SUm
    int r,N, sum=0;
    cin>>N;
    
    while(N>0){

        r=N%10;
        sum= sum+r;
        N=N/10;
    }
    cout<<"The sum of the digits is"<<sum;

    return 0;
}