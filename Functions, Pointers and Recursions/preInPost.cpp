#include<iostream>
using namespace std;
void preInpost(int n){
    if(n==0) return;
    cout<<"Pre "<<n<<endl;
    preInpost(n-1);
    cout<<"In "<<n<<endl;
    preInpost(n-1);
    cout<<"Post "<<n<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    preInpost(n);
}