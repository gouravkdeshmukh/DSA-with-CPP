#include<bits/stdc++.h>
using namespace std;

int  main(){
   

    for(int i = 1; i <= 10000; i++){
        int t = i ;
         int sum = 0;

        while(t!=0){
            int rem = t%10;
            sum += rem * rem *rem;
            t = t/10;
        }

        if(sum == i) {
            cout<<i<<endl;
        }
    }
}
