#include<iostream>
#include<cmath>
using namespace std;
double f(int n){
    if(n==1){
        return sqrt(2);
    }
    return sqrt(2+f(n-1));
    
}

int main(){
    cout<<f(3)<<endl;
    return 0;
}
