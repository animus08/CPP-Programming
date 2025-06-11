#include<iostream>
using namespace std;
int power(int x, int y){
    if(y==0) return 1;
    int a=power(x, y/2)*power(x, y/2);
    if(y%2==0){
        return a;
    }
    else{
        return a*x;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);    
}