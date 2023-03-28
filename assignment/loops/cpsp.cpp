#include<bits/stdc++.h>
using namespace std;

int main(){
    int cp,sp,profit, loss;
    cout<<"enter the cost price";
    cin>>cp;

    cout<<"enter the selling price";
    cin>>sp;

    if(sp > cp){
        profit = sp-cp;
        cout<<"profit : "<<profit;
    }
    else{
        loss = cp-sp;
        cout<<"loss : "<<loss;
    }
    
    return 0;
}