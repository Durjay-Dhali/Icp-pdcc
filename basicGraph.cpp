#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double f(double x){
    double A = 2*x*x +1;
    return A;
}

int main(){
    ofstream fout ("data.dat");

    for(int i=0; i<=10;i++){
        fout<<i<<" "<<f(i)<<endl;
    }
    return 0;
}