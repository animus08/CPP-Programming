// Parameterised Way
#include<iostream>
using namespace std;
int addition(int a, int n){
    if(a>n) return 0;
    return a+addition(a+1,n);
}
int main(){
    int n;
    cin>>n;
    cout<<addition(1, n);
}




// Return type
#include<iostream>
using namespace std;
int addition(int a){
    if(a==0) return 0;
    return a+addition(a-1);
}
int main(){
    int n;
    cin>>n;
    cout<<addition(n);
}
