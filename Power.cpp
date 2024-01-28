#include<iostream>
#include<cmath>
using namespace std;
double myPow(int a, int b){
    if(b==0){
        return 1;
    }
    return a*myPow(a,b-1);
}

int main(){
    cout<<myPow(3,4)<<endl;
    return 0;
}
