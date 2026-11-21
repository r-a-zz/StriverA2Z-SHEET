/*
    *
   ***
  *****
 *******
*********...

 */

#include <iostream>
using namespace std;

int main()
{
    int i, n, j;
    cout << "Enter The Number of Rows";
    cin >> n;

    for (i = 1; i <= n; i++)
    {

        //SPACES
        for (j = i; j < n; j++)  
        {
            cout << " ";
        }

        //STAR PATTERN.
        for (j = 1; j <= 2 * i - 1; j++)  
        {
            cout << "*";
        }
        cout << "\n";
        
    }
    return 0;
}