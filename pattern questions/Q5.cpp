/*
1*2*3
4*5*6
7*8*9
*/

#include<iostream>         
using namespace std;

int main(){
    int n;int m=1;
    cout << "enter the number of rows in the pattern"<<endl;
    cin >> n ;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=5;j++){
            if (j%2==0){
                cout << '*';
            }
            else {
                cout << m++;
            }
        }cout <<endl;
    }
}