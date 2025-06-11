#include<iostream>
using namespace std;
void reverse(int arr[], int a, int b){
    for(int i=a,j=b; i<j; i++, j--){
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
    int k;
    cin>>k;
    int arr[7]={1,2,3,4,5,6,7};
    k=k % 7;            // step = k % n; we can use 3rd variable too
    reverse(arr, 0, 6);
    reverse(arr, 0, k-1);
    reverse(arr,k, 6);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
}
