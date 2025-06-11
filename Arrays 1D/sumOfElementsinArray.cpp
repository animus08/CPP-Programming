#include<iostream>
using namespace std;
int main(){
    int a[5], sum=0;
    cout<<"Enter the numbers: ";
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    for(int i=0; i<5; i++){
        sum=sum+a[i];
    }
    cout<<sum;
}