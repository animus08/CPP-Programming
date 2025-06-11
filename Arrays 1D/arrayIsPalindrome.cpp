#include<iostream>
using namespace std;
int main(){
    int arr[6]={0,1,2,2,1,0};
    int i=0, j=5;
    bool flag=1;
    while(i<j){
        if(arr[i]!=arr[j]){
            flag=0;
        }
        i++;
        j--;
    }
    if(flag==1){
        cout<<"Paalindrome";
    }
    else{
        cout<<"Not";
    }
}
