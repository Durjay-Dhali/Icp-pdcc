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
double mySin(double x){
    double A=0;
    for(int i=0;i<50;i++){
        A = A + pow((-1),i)*pow(x,(2*i+1))/fact(2*i+1);
    }
    return A;
}
int main(){
    //45 degree = .7854 red
    cout<<mySin(.7854)<<endl;
    return 0;
}