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
    int arr_1[m][n], arr_2[m][n], arr_3[m][n];;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr_1[i][j];
        }
    }
    cout<<endl;
    cout<<"Enter Elements for 2nd Matrix"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr_2[i][j];
        }
    }
    cout<<endl;

    cout<<"Elements for 1st Matrix"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr_1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Elements for 2nd Matrix"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr_2[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Sum of 2 Matrices are: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            arr_3[i][j]=arr_1[i][j]+arr_2[i][j];
            cout<<arr_3[i][j]<<" ";
        }
        cout<<endl;
    }

}