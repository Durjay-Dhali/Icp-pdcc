#include<iostream>
#include<cmath>
using namespace std;
double fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    cout<<fact(4)<<endl;
    return 0;
}