#include<bits/stdc++.h>
using namespace std;

// Factorial of a number 
int main(){
    int N;
    unsigned long long fact =1;

    cin>>N;
    for(int i=1;i<=N; i++){

        fact= fact * i;
    }
    cout<<"Factorial is "<< fact;
    return 0;
}

