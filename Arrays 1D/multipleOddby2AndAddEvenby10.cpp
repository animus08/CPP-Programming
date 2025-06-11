#include<iostream>
using namespace std;
int main(){
    int a[5], b;
    cout<<"Enter the numbers: ";
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    for(int i=0; i<5; i++){
        if(i%2==0){
            a[i]=a[i]+10;
        }
        else{
            a[i]=a[i]*2;
        }
    }
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
}