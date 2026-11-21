/*
    1        1
    12      21
    123    321
    1234  4321
    1234554321
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, k, l, n;
    cout << "Enter the number of rows";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        //Pattern 
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }

        //Space 
        for (k = 2*(n-i); k >= 1; k--)
        {
            cout << " ";
        }

        //Pattern 
        for (l = i; l >= 1; l--)
        {
            cout << l;
        }

        cout << "\n";
    }
        return 0;
}