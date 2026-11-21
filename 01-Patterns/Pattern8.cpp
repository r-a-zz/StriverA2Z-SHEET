/*
 *******
  *****
   ***
    *
 */
#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the Number of Rows";
    cin >> n;

    for (i = n; i >= 1; i--)
    {

        for (j = n; j > i ; j--)
        {
            cout<<" ";
        }

        for (j = 2 * i - 1; j >= 1; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
}