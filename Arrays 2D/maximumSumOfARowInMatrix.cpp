#include<iostream>
#include<limits.h>
using namespace std;
int main(){

    int m, n, a;
    cout<<"Enter the no. of rows: ";
    cin>>m;
    cout<<"Enter the no. of cols: ";
    cin>>n;
    cout<<endl;

    cout<<"Enter Elements for 1st Matrix"<<endl;
    int arr_1[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr_1[i][j];
        }
    }

    int max=INT_MIN;

    for(int i=0; i<m; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            sum=sum+arr_1[i][j];
        }
        if(sum>max){
            max=sum;
            a=i;
        }
    }

    cout<<"Maximum Sum of a row is= "<<max<<" and the row number is "<<a;

}