#include<iostream>
using namespace std;
int main(){
    int A[3][3];
    for(int i =0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cin>>A[i][j];
        }
    }
    for(int i =0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}