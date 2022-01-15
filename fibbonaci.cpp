#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout <<fib (n) <<endl;
    return 0;
}
int fib(int n){
    if(n==1){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}
