#include<iostream>
using namespace std;
int factorial(int a){
    int fact=1;
    for(int i=1; i<=a; i++){
       fact=fact*i;
    }
    return fact;
}

int permutation(int n, int r){
    int comb=1;
    comb=factorial(n)/factorial(n-r);
}

int main(){
    int n, r;
    cin>>n>>r;
    cout<<permutation(n, r);
}