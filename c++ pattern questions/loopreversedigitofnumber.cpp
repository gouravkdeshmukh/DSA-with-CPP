#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
     cin>>n;
     
     int rev=0;
    //  for(int i=1; n>0 ; i++){
      
    //  }

        
    while(n>0){
       int  rem = n%10;
        rev = rev * 10 + rem;
        n/=10;
    }
cout<<rev;}