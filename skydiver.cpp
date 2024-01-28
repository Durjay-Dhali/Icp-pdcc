#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double vel(double t){
    double C1=60*9.8/1;
    double C2= 15-60*9.8/1;
    double C3= -1.0/60 ;
    double A;
    A = C1 + C2*exp(C3*t);
    return A;
}

int main(){
    ofstream fout("data.dat");
    for(double t =0; t<=100; t = t+.01){
        fout<<t<<" "<<vel(t)<<endl;
    }
    return 0;
}