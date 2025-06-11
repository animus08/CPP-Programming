#include<iostream>
using namespace std;
int staircase(int n){
    if(n<=2) return n;
    int total_ways=staircase(n-1)+staircase(n-2);
    return total_ways;
}
int main(){
    int n;
    cin>>n;
    cout<<staircase(n);
}