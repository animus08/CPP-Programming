#include<iostream>
using namespace std;
int staircase(int n){
    if(n<=2) return n;
    if(n==3) return 4;
    int total_ways=staircase(n-1)+staircase(n-2)+staircase(n-3);
    return total_ways;
}
int main(){
    int n;
    cin>>n;
    cout<<staircase(n);
}