/*
    1
    22
    333
    4444
    55555
*/
#include <iostream>
using namespace std;
int main()
{

    int i, j, n;
    cout << "Enter the number of rows ";
    cin >> n;

    if (n <= 0)
    { // Gaurd Checking Validity of a Number.
        cout << "Enter a Valid Number";
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }

    return 0;
}