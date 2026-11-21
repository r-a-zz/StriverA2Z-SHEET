#include<bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin>>N;

    int sum,a=0,b=1;
    if(N==1){
        cout<<"0";
    }
    if(N>=2){
        cout<<"0"<<" "<<"1";
    }
    for(int i=3;i<=N;i++){

        sum=a+b;
        a=b;
        b=sum;
        cout<<" "<<sum;
    }

    return 0;
}

