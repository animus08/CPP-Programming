#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int root=sqrt(n);
    cout<<root<<"\n";

    int power=pow(n,3);
    cout<<power<<"\n";

    int minimum=min(n,3);
    cout<<minimum<<"\n";
}