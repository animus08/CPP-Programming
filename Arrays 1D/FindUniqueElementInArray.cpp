#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,3,6,1,1,2,3};
    for(int i=0; i<7; i++){
        bool flag = false;
        for(int j=0; j<7; j++){
            if(arr[i]==arr[j] && i != j){
                flag = true;
                break;
            }
        }
        if(flag==false){
            cout<<arr[i];
            break;
        }
    }
}





// Only works in Some Cases...

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,1,3,4,4};
//     for(int i=0; i<5; i++){
//         bool flag = false;
//         for(int j=i+1; j<5; j++){
//             if(arr[i]==arr[j]){
//                 flag = true;
//             }
//         }
//         if(flag==false){
//             cout<<arr[i];
//             break;
//         }
//     }
// }