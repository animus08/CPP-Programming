#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of elemets: "<<endl;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        arr[i]=i+1;
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int a;
    cout<<"The no. which you want to remove "<<endl;
    cin>>a;

    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            for (int j = i; j < n - 1; j++){
                arr[j] = arr[j + 1];
            }
            n--;
            break;
        }
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}