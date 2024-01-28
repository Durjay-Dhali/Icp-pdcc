#include<iostream>
#include<cmath>
using namespace std;
void fib(int n){
    int t1=0, t2=1, temp;
    for(int i =0;i<n;i++){
        cout<<t1<<endl;
        temp = t1+t2;
        t1 = t2;
        t2 = temp;
    }
}

int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}
