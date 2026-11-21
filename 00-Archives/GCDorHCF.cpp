#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,r;

    cin>>a>>b;


//HCF or GCD Logic
        while(b!=0)
        {
            r=a%b; //stores the Remainder of the a an b division.
            a=b;
            b=r;
        }
        cout<<"HCF is "<<a;
    
}
