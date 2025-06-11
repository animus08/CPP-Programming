#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars, spaces;
        if (i <= n)
        {
            stars = i;
        }
        else
        {
            stars = 2 * n - i;
        }
        spaces = 2*(n - stars);
        for (int j = 1; j <= stars; j++)
        {
            cout <<  "* ";
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     for (int j = 1; j <= 2 * (n - i); j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
}