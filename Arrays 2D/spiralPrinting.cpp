#include <iostream>
#include <limits.h>
using namespace std;
int main()
{

    int n;
    cout << "Enter the no. of rows/cols: ";
    cin >> n;
    cout << endl;
    int a[n][n];

    int minr = 0, minc = 0, maxr = n - 1, maxc = n - 1, num = 1;

    while (num <= n * n)
    {
        // print minimum row
        for (int j = minc; j <= maxc; j++)
        {
            a[minr][j] = num++;
        }
        minr++;
        if (num > n * n)
            break;
        // print maximum column
        for (int i = minr; i <= maxr; i++)
        {
            a[i][maxc] = num++;
        }
        maxc--;
        if (num > n * n)
            break;
        // print maximum row
        for (int j = maxc; j >= minc; j--)
        {
            a[maxr][j] = num++;
        }
        maxr--;
        if (num > n * n)
            break;
        for (int i = maxr; i >= minr; i--)
        {
            a[i][minc] = num++;
        }
        minc++;
    }

    cout << "Spiral Printing: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}
