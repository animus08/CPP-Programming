#include<iostream>
using namespace std;
int main(){
    int a[8], x, count=0, b;
    cin>>x;
    cout<<"Enter the numbers: ";
    for(int i=0; i<8; i++){
        cin>>a[i];
    }
    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){
            for(int k=j+1; k<8; k++){
                b=a[i]+a[j]+a[k];
                if(b==x){
                    count +=1;
                    cout<<"("<<a[i]<<","<<a[j]<<","<<a[k]<<") ";
                }
            }
        }
    }
    cout<<endl;
    cout<<"No. of pairs equal to "<<x<<" are "<<count;
}