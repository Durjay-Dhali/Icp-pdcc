#include<iostream>
#include<cmath>
using namespace std;
double f(double x){
    double A = 2*x*x +1;
    return A;
}

int main(){

    for(int i=0; i<=10;i++){
        cout<<i<<" "<<f(i)<<endl;
    }
    return 0;
}
