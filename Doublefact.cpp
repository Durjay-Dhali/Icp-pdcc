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

int main(){

    for(int i=0; i<=10;i++){
        cout<<i<<" "<<dfact(i)<<endl;
    }
    return 0;
}
