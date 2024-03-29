/*
1
23
456
78910
*/

#include<iostream>
using namespace std;

int main(){
    int a;
    cout <<"enter the lenght of number pyramid"<<endl;
    cin >>a;
    int num = 1; 

    for (int i = 1; i <= a; ++i) { 
        for (int j = 1; j <= i; ++j) { 
            cout << num++ ; 
        }
        cout <<endl; 
    }
    
}