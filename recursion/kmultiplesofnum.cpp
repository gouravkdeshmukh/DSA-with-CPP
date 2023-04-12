#include<iostream>
using namespace std;

void f(int num , int k){
    //base case
    if(k < 1 )  return;

    //assumption 
    f(num , k-1);

    //self work
    cout<<num*k<<" ";
}

int main(){
    int num, k;
    cin>>num >> k;
    f(num , k);
}