#include<iostream>
using namespace std;
int main(){
    int arr[101];
    int x;
    cin>>x;
    for(int i=0; i<100; i++){
        arr[i]=i+1;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int j=0; j<100; j++){
        if(x==arr[j]){
            cout<<"Element found at index: "<<j;
        }
    }
}
