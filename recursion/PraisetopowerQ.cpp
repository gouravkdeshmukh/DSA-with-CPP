#include<iostream>
using namespace std;

int f(int p , int q){
    if(q == 0) return  1;
    return p * f(p, q-1);
}


int main(){
    int result = f(2,4);
    cout<<result<<endl;
}


// TC is O(q)
//sc is O(q) 