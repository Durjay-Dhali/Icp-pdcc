#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double walli(double n){
    double s =1;
    for(int i=1;i<=n;i++){
        s *= ((2*i)*(2*i))/((2*i-1)*(2*i+1));
    }
    return s;
}

int main(){
    ofstream fout ("data.dat");
    for(int i=10;i<=500;i++){
        fout<<i<<" "<<abs(M_PI-walli(i))<<endl;
    }
    return 0;
}
