#include<iostream>
#include<cmath>
using namespace std;
double dfact(int n){
    if(n==0||n==1){
        return 1;
    }
    else
        return n*dfact(n-2);
}

double gerf(double x, int n){
    double a = 0;
    for(int k =0;k<=n;k++){
        a+= pow(2,k)*pow(x,(2*k+1))/dfact(2*k+1);
    }
    return 2*exp(-1.0*x)/sqrt(M_PI)*a;
}

int main(){

    for(double x=-2.0; x<=2.0;x+=0.1){
        cout<<x<<"   "<<gerf(x,20)<<endl;
        
    }
    return 0;
}
