#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many characters you want to add: ";
    
    cin>>n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}