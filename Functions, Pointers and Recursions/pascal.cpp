#include<iostream>
using namespace std;
int factorial(int a){
    int fact=1;
    for(int i=1; i<=a; i++){
       fact=fact*i;
    }
    return fact;
}

int combination(int n, int r){
    int comb=1;
    comb=factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n-i-1; j++){
            cout<<" ";
        }
        for(int k=0; k<=i; k++){
            cout<<combination(i,k)<<" ";
        }
        cout<<"\n";
    }
}