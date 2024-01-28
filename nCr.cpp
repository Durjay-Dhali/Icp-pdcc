#include<iostream>
#include<cmath>
using namespace std;
double fact(int n){
    double A=1;
    for(int i=n;i>=1;i--){
        A=A*i;
    }

    return A;
}
double nCr(int n, int r){
    double A;
    A= fact(n)/(fact(r)*fact(n-r));
    return A;
}

int main(){
    cout<<nCr(5,2)<<endl;
    return 0;
}