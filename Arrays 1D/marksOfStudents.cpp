#include<iostream>
using namespace std;
int main(){
    int a[5];
    cout<<"Enter the Marks of Students: ";
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    for(int i=0; i<5; i++){
        int b=a[i];
        if(b<35){
            cout<<"Element found at index "<<i<<endl;
        }
    }
}