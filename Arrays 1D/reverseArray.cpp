#include<iostream>
using namespace std;
int main(){
    int a[5];
    int b[5];
    cout<<"Enter the elements: ";
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    cout<<"Elements are: ";
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=4; i>=0; i--){
        b[4-i]=a[i];
    }
    cout<<"Reverse Elements are: ";
    for(int i=0; i<5; i++){
        cout<<b[i]<<" ";
    }
}