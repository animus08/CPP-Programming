#include<iostream>
using namespace std;
int main(){
    int a[5], product=1;
    cout<<"Enter the numbers: ";
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    for(int i=0; i<5; i++){
        product=product*a[i];
    }
    cout<<product;
}