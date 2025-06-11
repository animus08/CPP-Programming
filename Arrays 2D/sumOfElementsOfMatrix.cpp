#include<iostream>
using namespace std;
int main(){

    int m, n;
    cout<<"Enter the no. of rows: ";
    cin>>m;
    cout<<"Enter the no. of cols: ";
    cin>>n;
    cout<<endl;

    cout<<"Enter Elements for 1st Matrix"<<endl;
    int arr_1[m][n], sum=0;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr_1[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            sum=sum+arr_1[i][j];
        }
    }

    cout<<sum;
}