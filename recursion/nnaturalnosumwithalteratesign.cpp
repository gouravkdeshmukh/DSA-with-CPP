#include<iostream>
using namespace std;

int f(int n){
    
    //base case
    if(n < 1) return 0;

    //asumption and self work
    return f(n-1) + ((n%2==0)?(-n):(n));
}

int  main(){
    int n;
    cin>>n;
    cout<<f(n);
}