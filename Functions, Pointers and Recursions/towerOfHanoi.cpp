#include<iostream>
using namespace std;
void tower(int n, char S, char H, char D){
    if(n==0) return;
    tower(n-1, S, D, H);
    cout<<S<<"->"<<D<<endl;
    tower(n-1, H, S, D);
    return;
}
int main(){
    int n;
    //char A, B, C;
    cin>>n;
    tower(n, 'A', 'B', 'C');
}
