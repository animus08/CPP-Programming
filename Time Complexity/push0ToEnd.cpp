#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {5, 0, 2, 0, 0, 4, 1, 3, 0};
    int n=9;

    // int ans[9];
    // int idx = 0;
    // for (int i = 0; i < 9; i++)
    // {
    //     if (arr[i] != 0)
    //     {
    //         ans[idx] = arr[i];
    //         idx++;
    //     }
    // }
    // while (idx != 9)
    // {
    //     ans[idx] = 0;
    //     idx++;
    // }

    int minIndex = 0;
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j >= 1 && arr[j]!=0)
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
}
    