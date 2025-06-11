#include<iostream>
using namespace std;
int main(){
    int n; // n=11 
    cin>>n;
    int arr[n], brr[n]={};
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // M-1-
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i]==arr[j]){
    //             cout<<"Duplicate Element Found at index "<<i<<" and "<<j<<endl;
    //         }
    //     }
    // }

    // M-2
    // for(int i=0; i<n; i++){
    //     if(brr[arr[i]]==1){
    //         cout << "Duplicate Element found at index " << arr[i]<< endl;
    //         break;
    //     }
    //     brr[arr[i]]=1;
    // }

    // M-3
    // int s1=0, s2=0;
    // s1=((n-1)*n)/2;        //sum should be from 1 to n-1 
    // for(int i=0; i<n; i++){
    //     s2=s2+arr[i];
    // }
    // int diff=s2-s1;
    // cout << "The duplicate elements is: "<<diff;
}