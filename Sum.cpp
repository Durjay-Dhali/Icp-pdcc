#include<iostream>
#include<cmath>
using namespace std;
double sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}

int main(){
    cout<<sum(5)<<endl;
    return 0;
}
