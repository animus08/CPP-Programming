//Simple After Recursion

#include<iostream>
using namespace std;
void increasing(int n){
    if(n==0) return;
    increasing(n-1);
    cout<<n<<" ";
    return;
}
int main(){
    int n;
    cin>>n;
    increasing(n);
}






// Parametrised Way

#include<iostream>
using namespace std;
void increasing(int a, int n){
    if(a>n) return;
    cout<<a<<" ";
    increasing(a+1, n);
    return;
}
int main(){
    int n;
    cin>>n;
    increasing(1, n);
}