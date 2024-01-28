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

int main(){
    cout<<fact(5)<<endl;
    return 0;
}
