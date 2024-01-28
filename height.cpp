#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double height(double t){
    double m = 0.25;
    double g = 9.8;
    double k = 0.1;
    double h0=300;
    return h0 - m*g*t/k + m*m*g*(1-exp(-k*t/m))/(k*k);
}

int main(){
    ofstream fout ("data.dat");

    for(double i=0; i<=20;i = i+0.01){
        fout<<i<<" "<<height(i)<<endl;
    }
    return 0;
}
