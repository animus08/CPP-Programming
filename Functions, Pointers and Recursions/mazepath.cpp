#include<iostream>
using namespace std;
int maze(int cr, int cc, int er, int ec){
    int rightWays=0;
    int downWays=0;
    if(cr==er && cc==ec){
        return 1;
    }
    else if(cr==er){
        rightWays += maze(cr, cc+1, er, ec);
    }
    else if(cc==ec){
        downWays += maze(cr+1, cc, er, ec);
    }
    else{
        rightWays += maze(cr, cc+1, er, ec);
        downWays += maze(cr+1, cc, er, ec);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}
int main(){
    int rows, cols;
    cin>>rows>>cols;
    cout<<maze(1, 1, rows, cols);    
}
