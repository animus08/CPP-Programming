#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    // for (int i = 1; i <= 2 * n - 1; i++)
    // {
    //     int stars = i;
    //     if (i > n)
    //     {
    //         stars = 2 * n - i;
    //     }
    //     for (int j = 1; j <= stars; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i > n)
        {
            for (int j = 1; j <= 2 * n - i; j++)
            {
                cout << "* ";
            }
            cout<<endl;
        }
        if (i <= n)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
}