#include<iostream>
using namespace std;
void reverseArr(int arr[]){
    int i=0;
    int j=6;
    while(i<j){      // We can use this too- for(int i=0,j=6; i<j; i++, j--) 
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    int arr[7];
    cout<<"Enter the elements: ";
    for(int i=0; i<7; i++){
        cin>>arr[i];
    }
    reverseArr(arr);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
}