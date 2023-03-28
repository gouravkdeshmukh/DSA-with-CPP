#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
     cin>>n;
     int count=0;

    //  for(int i=1; n>0 ; i++){
    //     count++;
    //     n= n/10;
    //  }

    while(n>0){
        count++;
        n=n/10;
    }
     cout<<count;
}