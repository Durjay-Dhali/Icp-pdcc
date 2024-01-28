#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double mySin(int n,double x){
    double A = 1.0;
    for(int k=1;k<=n;k++){
        A = A*(1-x*x/(k*k*M_PI*M_PI));
    }
    return A*x;
}

int main(){
    double a = M_PI/4;
    double b = M_PI/2;
    ofstream fout ("data.dat");
    for(int n=10; n<=100; n++){
        fout<<n<<"    "<<abs(mySin(n,a)-sin(a))<<"    "<<abs(mySin(n,b)-sin(b))<<endl;
    }
    return 0;

}
