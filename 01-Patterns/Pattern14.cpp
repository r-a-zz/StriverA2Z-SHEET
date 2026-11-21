#include <iostream>
using namespace std;

int main()
{

    int i, j, n;
    cout << "Enter the number of Rows";
    cin >> n;
    char t;   //most important part.

    for (i = 1; i <= n; i++)
    {
        t = 'A';
        for(j = 1;j<=i;j++){
            cout<< t++;
        }
        cout<<"\n";
    }
    return 0;
}