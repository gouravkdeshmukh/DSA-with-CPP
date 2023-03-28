#include<iostream>
using namespace std;

int f(int p, int q) {
    if(q == 0)  return 1;
    if(q % 2 == 0){
        return f(p, q/2) * f(p, q/2);
    }
    else{
        return p * f(p, (q-1)/2) * f(p, (q-1)/2);
    }
}

int main(){
    int result = f(2,8);
    cout<<result<<endl;
}