#include<iostream>
#include<cmath>
using namespace std;
double pi(int n){
    double A =0;
    for(int i=0;i<n;i++){
        A+=pow((-1),i)/(2*i+1);
    }
    return A*4;
}
int main(){
    cout<<pi(2000)<<endl;
    return 0;
}