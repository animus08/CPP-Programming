#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int a[5], b;
    int max=INT_MIN;
    int smax=INT_MIN;
    cout<<"Enter the numbers: ";
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    for(int i=0; i<5; i++){
        b=a[i];
        if(b>max){
            max=b;
        }
    }
    cout<<"The greatest no. from the array is: "<<max<<endl;
    for(int i=0; i<5; i++){
        b=a[i];
        if(b!=max && b>smax){
            smax=b;
        }
    }
    cout<<"The greatest no. from the array is: "<<smax;
}
