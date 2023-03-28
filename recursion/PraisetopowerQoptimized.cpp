#include<iostream>
using namespace std;

int f(int p , int q){
    if(q == 0) return 1;
    int result = 1;
    if(q % 2 == 0){
        //if q is even
        result = f( p , q/2);
        return result * result;
    }
    else{
        //if q is odd
        result = f( p , (q - 1)/2);
        return p * result * result;
    }
}

int main(){
    int result = f(2,4);
    cout<<result<<endl;
}


//TC = O(logq)
//SC = O(q)