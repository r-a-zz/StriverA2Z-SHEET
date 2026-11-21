#include<bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin>>N;
    int count=0;

    if(N<=1){
        cout<<"Not Prime";
    }

    else{

        for(int i = 2; i*i <= N; i++){

            if (N % i == 0){
                cout<<"Not Prime";
                return 0;
            }
                
        }
        cout<<"Prime";

        /* ALT LOGIC */

        // for(int i=1; i<=N; i++){
        //     if(N%i==0)
        //         count++;
        // }
        // if(count==2)
        //     cout<<"Prime Number";
        // else
        //     cout<<"Not Prime";
    }
    return 0;

}


