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
double myExp(double x){
    double A;
    for(int i=0; i<50; i++){
        A += pow(x,i)/fact(i);
    }
    return A;
}
int main(){
    cout<<myExp(5)<<endl;
    return 0;
}