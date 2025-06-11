#include<iostream>
using namespace std;
int main(){
    int a[5], even=0, odd=0;
    int diff;
    cout<<"Enter the numbers: ";
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    for(int i=0; i<5; i++){
        if(i%2==0){
            even += a[i];
        }
        else{
            odd += a[i];
        }
    }
    diff=even-odd;
    cout<<"Difference of Even to Odd Indices is: "<<diff;
}