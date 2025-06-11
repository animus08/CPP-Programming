#include <iostream>
using namespace std;
int main()
{
    int a[8], target, b;
    cout << "Enter the target: ";
    cin >> target;
    for (int i = 0; i < 8; i++)
    {
        cin >> a[i];
    }

    // M-1- Most Optimised Approach
    int i = 0, j = 7;
    while (i < j)
    {
        if (a[i] + a[j] == 8)
        {
            cout << "Target found at " << "(" << a[i] << "," << a[j] << ")" << endl;
            break;
        }
        else if (a[i] + a[j] > 8)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    // M-2- Least Optimised Approach
    // for (int i = 0; i < 8; i++)
    // {
    //     for (int j = i+1; j < 8; j++)
    //     {
    //         b = a[i] + a[j];
    //         if (b == target)
    //         {
    //             cout << "Target found at "<< "(" << a[i] << "," << a[j] << ")" << endl;
    //         }
    //     }
    // }
}