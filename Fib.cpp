#include<iostream>
#include<cmath>
using namespace std;
double fib(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    for(int i =1;i<15;i++){
    cout<<fib(i)<<endl;
    }
    return 0;
}
