//  D
//  CD
//  BCD
//  ABCD

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the number of Rows";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = n - i; j < n; j++)
        {
            cout << char('A' + j);
        }
        cout << "\n";
    }

    return 0;
}