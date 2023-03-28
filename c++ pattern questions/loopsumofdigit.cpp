#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int rem;
    int sum=0; 

    // for(int i=0; n>0; i++){
    //     rem = n%10;
    //     sum = sum + rem;
    //     n/=10;
    // }
    // cout<<sum<<endl;


    while(n!=0){
        rem =n%10;
        sum += rem;
        n /=10;
    }

    cout<<sum<<endl;

}