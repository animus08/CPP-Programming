#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    cin.ignore();
    char str[n];

    puts("Enter a string");
    cin.getline(str, n);

    puts("The string you entered is: ");
    puts(str);
    cout<<endl;

    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    cout<<size;
    for(int i=0, j=size-1; i<=j; i++, j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts(str);
}


