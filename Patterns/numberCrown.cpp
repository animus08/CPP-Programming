// Input :
// 4
// Output 2 :
// 1             1
// 1 2         2 1
// 1 2 3     3 2 1
// 1 2 3 4 4 3 2 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << "  ";
        }
        for (int j = i; j >=1; j--)
        {
            cout << j << " ";
        }
        cout<<endl;
    }
}
