#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int size=s.length();
    for(int i=0; i<size; i++){
        if(i%2==0){
            s[i]='a';
        }
    }
    cout<<s;
}
