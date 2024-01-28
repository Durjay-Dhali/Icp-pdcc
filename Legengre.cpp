#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double legn(int n, double x){
    if(n==0){
        return 1;
    }
    if(n==1){
        return x;
    }
    return ((2*n-1)*x*legn(n-1,x)-(n-1)*legn((n-2),x))/n;
}

int main(){
    ofstream fout ("data.dat");
    for(double x =-2;x<=2;x+=.01){
        fout<<x<<"     "<<legn(0,x)<<"    "<<legn(1,x)<<"    "<<legn(2,x)<<"    "<<legn(3,x)<<endl;

    }
    return 0;
}
