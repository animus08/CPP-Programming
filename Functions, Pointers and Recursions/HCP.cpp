#include<iostream>
using namespace std;
int HCF(int m, int n){
    int hcf;
    for(int i=1; i<=min(m,n); i++){
        if(m%i==0 && n%i==0){
            hcf=i;
        }
    }
    return hcf;
}
int main(){
    int a, b;
    cin>>a>>b;
    cout << "HCF: " << HCF(a, b);
}