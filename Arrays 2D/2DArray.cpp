#include<iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"Enter the no. of rows: ";
    cin>>m;
    cout<<endl;
    cout<<"Enter the no. of cols: ";
    cin>>n;

    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}