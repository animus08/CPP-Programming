#include<iostream>
using namespace std;
void decreasing(int n){
    if(n==0) return;
    cout<<n<<" ";
    decreasing(n-1);
    return;
}
int main(){
    int n;
    cin>>n;
    decreasing(n);
}






// Print Good Morning 'n' times.

// #include<iostream>
// using namespace std;
// void greeting(int n){
//     if(n==0) return;
//     cout<<"Good Morning"<<endl;
//     greeting(n-1);
//     return;
// }
// int main(){
//     int n;
//     cin>>n;
//     greeting(n);
// }





