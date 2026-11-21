// A
// BB
// CCC
// DDDD
// EEEEE

#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    char t = 'A';
    cout<<"Enter the number of rows";
    cin>>n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout<<t;
        }
        cout<<"\n";
        t++;
    }
    return 0;
}