#include<iostream>
using namespace std;
int maze(int er, int ec){
    int rightWays=0;
    int downWays=0;
    if(er==1 && ec==1){
        return 1;
    }
    else if(er==1){
        rightWays += maze(er,ec-1);
    }
    else if(ec==1){
        downWays += maze(er-1,ec);
    }
    else{
        rightWays += maze(er,ec-1);
        downWays += maze(er-1,ec);
    }
    int totalWays=rightWays+downWays;
    return totalWays;
}
int main(){
    int rows, cols;
    cin>>rows>>cols;
    cout<<maze(rows, cols);    
}
