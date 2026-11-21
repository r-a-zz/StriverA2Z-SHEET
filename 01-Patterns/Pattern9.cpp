#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout<<"Enter the number of rows";
    cin>>n;

    for (i = 1; i <= n; i++)
    {
        
        for (j = i; j < n; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout<<"\n";
    }

    for (i = n; i >= 1; i--)
    {   
        for (j = n; j > i; j--)
        {
            cout << " ";
        }
        for (j = 2 * i - 1; j >= 1 ; j--)
        {
            cout << "*";
        }
        cout<<"\n";
    }

    return 0;
}