#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return; 
}
int main(){
    int a, b;
    cin>>a>>b;
    swap(&a,&b);
    cout<<"1st no. is= "<<a<<"\n"<<"2nd no. is= "<<b<<"\n\n";
}