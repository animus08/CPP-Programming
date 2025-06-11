#include<iostream>
using namespace std;
int fibonacci(int n){
    int fibo;
    if(n<=2) return 1;    
    fibo=fibonacci(n-1)+fibonacci(n-2);
    return fibo;
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
}