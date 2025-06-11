#include <iostream>
using namespace std;
int main()
{
    int a[7] = {9, 1, 3, 4, 10, 5, 6};
    int n = 7;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " "; 
    }
    cout << endl;

    // M-1- Optimised
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = false;
            }
        }
        if (flag == true)
            break;
    }

    // M-2-
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < n - 1; j++)
    //     {
    //         if (a[j] > a[j + 1])
    //         {
    //             int temp = a[j];
    //             a[j] = a[j+1];
    //             a[j+1] = temp;
    //         }
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}