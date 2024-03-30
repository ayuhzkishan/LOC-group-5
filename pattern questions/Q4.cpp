/*
123
112233  
111222333 
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows in pattern"<< endl;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           cout << 1;
        }
        for(int k=1;k<=i;k++){
           cout << 2;
        }
        for(int l=1;l<=i;l++){
           cout << 3;
        }cout << endl;    
    }
}