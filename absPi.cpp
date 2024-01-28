#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double pi(int n){
    double A =0;
    for(int i=0;i<n;i++){
        A+=pow((-1),i)/(2*i+1);
    }
    return A*4;
}

int main(){
    ofstream fout ("data.dat");
    for(int i=10;i<=500;i++){
        fout<<i<<" "<<abs(M_PI-pi(i))<<endl;
    }
    return 0;
}
