/*
123
112233  cout << endl;
111222333 cout <<j;
*/
#include<iostream>
using namespace std;

int main(){
    int n=3;
    //cout<<"Enter the number of rows in pattern"<< endl;
    //cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           for(int m=1;m<=i;m++){
                 cout<<j;
           }
        }cout<<endl;
    }
}