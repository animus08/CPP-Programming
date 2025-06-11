#include<iostream>
using namespace std;
void series(int n){
    if(n==0) return;
    cout<<n<<" ";
    series(n-1);
    cout<<n<<" ";
    return;
}
int main(){
    int n;
    cin>>n;
    series(n);
}
