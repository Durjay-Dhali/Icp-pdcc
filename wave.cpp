#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double f(double t,double b){
    double k=4;
    double m=1;
    double A=1;
    double w = sqrt((k/m)-(b*b/(4*m)));
    return A*exp(-b*t/(2*m))*cos(w*t);

}

int main(){
    ofstream fout("data.dat");
    for(double i=0; i<=40;i+=0.01){
        fout<<i<<" "<<f(i,0.1)<<endl;
    }
    return 0;
}
