#include<iostream>
using namespace std;
int main(){
    int a[5], b;
    cout<<"Enter the numbers: ";
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    int min=a[0];
    for(int i=0; i<5; i++){
        b=a[i];
        if(min>b){
            min=b;
        }
    }
    cout<<"The greatest no. from the array is: "<<min;
}

