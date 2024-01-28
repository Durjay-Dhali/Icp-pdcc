#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double fact(int n){
    if(n==0){
        return 1;
    }
    else 
        return n*fact(n-1);
}
double reman(double n){
    
    return sqrt(M_PI)*pow(n,n)*exp(-n)*pow((8*n*n*n + 4*n*n + n + 1.0/30),(1.0/6));
}

int main(){
    ofstream fout("data.dat");
    for(int i=0; i<=10;i++){
        fout<<i<<" "<<abs(reman(i)-fact(i))<<endl;
    }
    return 0;
}
