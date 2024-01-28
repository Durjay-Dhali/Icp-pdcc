#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double herm(int n, double x){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 2.0*x;
    }
    return 2*x*herm(n-1,x)-2*(n-1)*herm(n-2,x);
    
}

int main(){
    ofstream fout ("data.dat");
    for(double x =-2;x<=2;x+=.01){
        fout<<x<<"     "<<herm(0,x)<<"    "<<herm(1,x)<<"    "<<herm(2,x)<<"    "<<herm(3,x)<<endl;

    }
    return 0;
}
