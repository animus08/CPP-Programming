#include<iostream>
#include<limits.h>
using namespace std;
int main(){

    int m, n, sum=0;
    cout<<"Enter the no. of rows: ";
    cin>>m;
    cout<<"Enter the no. of cols: ";
    cin>>n;
    cout<<endl;

    int l1, r1, l2, r2;
    cin>>l1>>r1>>l2>>r2;

    cout<<"Enter Elements for 1st Matrix"<<endl;
    int arr_1[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr_1[i][j];
        }
    }

    for(int i=l1; i<=l2; i++){
        for(int j=r1; j<=r2; j++){
            sum=sum+arr_1[i][j];
        }
    }
    cout<<sum;

}