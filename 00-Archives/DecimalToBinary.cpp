#include<bits/stdc++.h>
using namespace std;

int main(){

    //BINARY of a Decimal number;

    int N,i=0;
    int binary[32]={0};
    cin>>N;

    if(N==0){         // for handelling 0;
        cout<<binary[0];
        return 0;
    }

    while(N>0){        //to generate and store Binary digits.

        int r= N%2;
        N=N/2;
        binary[i]=r;
        i++;
    }

    for(i=i-1;i>=0;i--){   // to loop into it and print the required binary for the decimal

        cout<<binary[i];
    }

    return 0;
}