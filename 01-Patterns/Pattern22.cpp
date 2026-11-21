// 5 5 5 5 5 5 5 5 5
// 5 4 4 4 4 4 4 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 2 1 2 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 4 4 4 4 4 4 5
// 5 5 5 5 5 5 5 5 5

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the number of rows";
    cin >> n;

    for (i = n; i >= 1; i--)
    {
        for (j = n; j >= i; j--)
        {
            cout << j;
        }

        for (j = 2 * (i - 1); j >= 1; j--)
        {
            cout << i;
        }

        for (j = i + 1; j <= n; j++)
        {
            cout << j;
        }
        cout << "\n";
    }

    for (i = 1; i <= n - 1; i++)
    {
        for (j = n; j >= i + 1; j--)
        {
            cout << j;
        }

        for (j = 2 * i - 1; j >= 1; j--)
        {
            cout << i + 1;
        }

        for (j = i + 1; j <= n; j++)
        {
            cout << j;
        }
        cout << "\n";
    }

    return 0;
}