#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;

    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= i; j++){
    //         if (i % 2 != 0){
    //             if (j % 2 != 0){
    //                 cout << "1";
    //             }
    //             else{
    //                 cout << "0";
    //             }
    //         }
    //         else{
    //             if (j % 2 != 0){
    //                 cout << "0";
    //             }
    //             else{
    //                 cout << "1";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }
    int start;
    for(int i=1; i<=n; i++){
        if(i%2!=0) start = 1;
        else start=0;
        for(int j=1; j<=i; j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}