#include <iostream>
#include <limits.h>
using namespace std;
int main()
{

    int m, n;
    cout << "Enter the no. of rows/cols: ";
    cin >> m;
    cout << "Enter the no. of rows/cols: ";
    cin >> n;
    cout << endl;

    cout << "Enter Elements for 1st Matrix" << endl;
    int a[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    cout << "1st Matrix is: \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Wave Printing 1:  \n";
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << a[j][i] << " ";
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[j][i] << " ";
            }
        }
    }
}