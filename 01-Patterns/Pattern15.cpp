/*
    ABCDE...
    ABCD
    ABC
    AB
    A
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter The number of Rows";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        char t= 'A';
        for (j = 1; j <=n-i; j++)
        {
            cout<< t++;
        }
        cout<<"\n";
    }
    return 0;
}