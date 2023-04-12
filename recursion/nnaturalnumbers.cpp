#include<bits/stdc++.h>
using namespace std;

void f(int n){
    //base case
    if(n < 1) return;

    //assumption
    f(n-1);

    //self work
    cout<<n<<" ";
   
}


int main(){
    
    int n ;
    cin>>n;

    f(n);
}