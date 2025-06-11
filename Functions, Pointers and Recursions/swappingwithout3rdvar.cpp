#include<iostream>
using namespace std;
int swap(int a, int b){
    int temp;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Swapped No. are: \n";
    cout<<"1st no. is = "<<a<<"\n";
    cout<<"2nd no. is = "<<b<<"\n";
}
int main(){
    int a, b;
    cin>>a>>b;
    cout<<"1st no. is= "<<a<<"\n"<<"2nd no. is= "<<b<<"\n\n";
    swap(a,b);
}