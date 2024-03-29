/*
****
*  *
*  *
****
*/
#include<iostream>
using namespace std;

int main(){
    int num=4;
    for (int i = 1; i <= num; ++i) { 
        if (i==num || i==1){
            for (int j=1;j<=num;j++){
                cout<<'*';
            }cout <<endl;
        } 
        else{
            cout <<'*';
            for(int j=1;j<=num-2;j++){
                cout <<' ';
            }cout <<'*'<<endl;
        }
        }
    }
