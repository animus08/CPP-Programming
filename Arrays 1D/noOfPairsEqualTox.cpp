#include<iostream>
using namespace std;
int main(){
    int a[5], x, count=0, b;
    cin>>x;
    cout<<"Enter the numbers: ";
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            b=a[i]+a[j];
            if(b==x){
                count +=1;
                cout<<"("<<a[i]<<","<<a[j]<<") ";
            }
        }
    }
    cout<<endl;
    cout<<"No. of pairs equal to "<<x<<" are "<<count;
}