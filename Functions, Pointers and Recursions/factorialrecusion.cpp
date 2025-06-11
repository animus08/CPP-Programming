#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1) return 1;
    int fact=n*factorial(n-1);
    return fact;
}
int main(){
    int n;
    cin>>n;
    int fact=factorial(n);
    cout<<"Factorial is: "<<fact;
}