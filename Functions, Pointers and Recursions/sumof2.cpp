#include<iostream>
using namespace std;
int sum(int a,int b){
    int add;
    add=a+b;
    cout<<add;
}
int main(){
    int a,b;
    cin>>a>>b;
    //cout<<sum(a,b);
    sum(a,b);
}