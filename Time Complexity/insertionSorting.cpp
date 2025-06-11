#include <iostream>
using namespace std;
int main()
{
    int a[7] = {9, 1, 3, 4, 10, 5, 6};
    int n = 7, b;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    // int min = a[0];
    int minIndex = 0;
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j>=1 && a[j] < a[j - 1])
        {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
                j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}