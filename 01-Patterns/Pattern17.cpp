//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the number of Rows";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        //Spaces
        for (j = n; j > i; j--)
        {
            cout << " ";
        }

        //Left Side Triangle
        for (j = 0; j < i; j++)
        {
            cout << char('A' + j);
        }

        //Right Side Triangle
        for (j = i-2; j >= 0; j--)
        {

            cout << char('A' + j);
        }
        cout<<"\n";
    }
    return 0;
}

//=== Brute Force Method ===//

// int i, j, k, l, n;
// char v = 'A', p , t ;

// cout << "Enter The Number of rows";
// cin >> n;

// for (i = 1; i < n; i++)
// {
//     /*===Spaces===*/
//     for (j = i ; j < n; j++)
//     {
//         cout<<" ";
//     }
//
//     /*===Left Half Triangle===*/
//     t='A';
//     for (k = 1 ; k <= i; k++)
//     {
//         cout<<t++;
//     }
//
//     /*===Right Half Triangle===*/
//     p=v;
//     for (l = i-1 ; l > 0; l--)
//     {
//         cout<<p--;
//     }
//     if(i>1)v++;

//     cout<<"\n";
// }