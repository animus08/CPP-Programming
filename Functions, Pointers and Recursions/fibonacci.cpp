#include<iostream>
using namespace std;
int main(){
    int n, FA=0, FB=0, FC=1;
    cin>>n;
    for(int i=0; i<=n; i++){
        if(i==0){
            FA=0;
        }
        else if(i==1){
            FA=1;
        }
        else{
            FA=FB+FC;
            FB=FC;
            FC=FA;
        }
        cout<<FA<<" ";
    }
}