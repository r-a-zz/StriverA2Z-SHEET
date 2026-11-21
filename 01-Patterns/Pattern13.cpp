// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15

#include <iostream>
using namespace std;

int main()
{

    int i, j, n,t=1;
    cout << "Enter the Number of Rows \n";
    cin >> n;

    for(i= 1;i<=n;i++){
        for(j = t; j <t+i; j++){
            cout<<j<<" ";
        }
        t=j;
        cout<<"\n";
    }
    return 0;
}
