#include <iostream>
using namespace std;
int main()
{
    char str[] = "PhysicsWallah";
    int i = 0;
    while (str[i] != '\0')
    {
        cout << str[i];
        i++;
    }
    cout<<endl;
    cout<<"Size of string is: "<<i+1;
}
