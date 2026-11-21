// *****
// *   *
// *   *
// *   *
// *****

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i == n || i == 1)
        {
            for (j = 1; j <= n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}