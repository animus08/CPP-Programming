#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout << endl;
    }
}

// for (int i = 1; i <= n; i++)
// {
//     int start = n - i + 1;
//     for (int j = start; j <= n; j++)
//     {
//         cout << char(start + 64) << " ";
//         start++;
//     }
//     cout << endl;
// }