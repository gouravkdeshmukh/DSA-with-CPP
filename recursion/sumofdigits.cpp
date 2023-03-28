#include<iostream>
using namespace std;

int sod(int n){
    if(n <= 9 && n >= 0)  return n;
    return sod(n/10) + (n%10);
}

int main(){
    int result = sod(56556);
    cout<<result<<endl;
}


//TC = O(d);
//SC = O(d);
