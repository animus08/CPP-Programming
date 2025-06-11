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
    int a[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<"1st Matrix is: \n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Transposed Matrix is: \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}


// You can do by this also-
// int b[m][n];
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             b[i][j]=a[j][i];   
//         }
//     }
//     cout<<"Transposed Matrix is: \n";
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             cout<<b[i][j]<<" ";
//         }
//         cout<<endl;
//     }




    #include<iostream>
    #include<limits.h>
    using namespace std;
    int main(){
    
        int n;
        cout<<"Enter the no. of rows/cols: ";
        cin>>n;
        cout<<endl;
    
        cout<<"Enter Elements for 1st Matrix"<<endl;
        int a[n][n];
    
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }
        cout<<"1st Matrix is: \n";
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<"Transposed Matrix is: \n";
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<a[j][i]<<" ";
            }
            cout<<endl;
        }
    }