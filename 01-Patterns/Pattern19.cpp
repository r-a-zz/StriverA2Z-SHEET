//  **********
//  ****  ****
//  ***    ***
//  **      **
//  *        *
//  *        *
//  **      **
//  ***    ***
//  ****  ****
//  **********

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i, j, n;
    cout << "Enter the number of Rows";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        //Star
        for (j = i; j <= n; j++)
        {
            cout << "*";
        }
        //Space
        for (j = 1; j <= 2 * (i - 1); j++)
        {
            cout << " ";
        }
        //Star
        for (j = i; j <= n; j++)
        {
            cout << "*";
        }
        cout<<"\n";
    }

    for (i = 1; i <= n; i++)
    {
        //Star
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        //Space
        for (j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        //Star
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout<<"\n";
    }
    return 0;
}