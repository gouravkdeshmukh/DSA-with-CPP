#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 2;
    k  = k%n;

    int revarr[n];
    int j=0;

    for(int i = n-k ; i<n; i++){
        revarr[j++] = arr[i];
        
    }
    

    for(int i = 0 ; i<=k; i++){
        revarr[j++] = arr[i];
      
    }
    //  cout<<revarr[3]<<endl;
    //   cout<<revarr[4]<<endl;
    //    cout<<revarr[5]<<endl;

    // for(int ele:arr){
    //     cout<<ele<<" ";
    // }
    for(int ele:revarr){
        cout<<ele<<" ";
    }
}