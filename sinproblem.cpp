#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double fact(int n){
    double A=1;
    for(int i=n;i>=1;i--){
        A=A*i;
    }
    return A;
}
double mySin(int n, double x){
    double A=0;
    for(int i=0;i<=n;i++){
        A = A + pow((-1),i)*pow(x,(2*i+1))/fact(2*i+1);
    }
    return A;
}
int main(){
    ofstream fout ("data.dat");
    for(int n=1; n<=100; n++){
        fout<<n<<"    "<<abs(mySin(n,0.5)-sin(0.5))<<endl;
    }
    return 0;
}