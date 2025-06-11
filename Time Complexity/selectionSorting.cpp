#include <iostream>
using namespace std;
int main()
{
    int a[7] = {9,1,3,4,10,5,6};
    int n = 7, b;

    // Print the array.
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    
    // int min = a[0];
    int minIndex = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}