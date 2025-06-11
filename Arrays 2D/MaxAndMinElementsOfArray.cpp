#include<iostream>
#include<limits.h>
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
    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr_1[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr_1[i][j]>max){
                max=arr_1[i][j];
            }
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(min>arr_1[i][j]){
                min=arr_1[i][j];
            }
        }
    }

    cout<<"maximum element is: "<<max<<endl;
    cout<<"minimum element is: "<<min<<endl;
}
