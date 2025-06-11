#include<iostream>
using namespace std;
int main(){
    int a[5], x, count=0;
    cin>>x;
    cout<<"Enter the numbers: ";
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    for(int i=0; i<5; i++){
        if(a[i]>x){
            count +=1;
        }
    }
    cout<<"No. of elements greater than "<<x<<" are "<<count;
}