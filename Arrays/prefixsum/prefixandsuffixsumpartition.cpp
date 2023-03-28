#include<bits/stdc++.h>
using namespace std;


bool prefixSuffixSum(int arr[] ,int n){
    int total = 0;
    for(int i=0; i<n; i++){
        total += arr[i];
    }
        int prefixSum = 0;
    for(int i=0; i<n; i++){
        prefixSum += arr[i];
        int suffixSum = total - prefixSum;
        if(prefixSum == suffixSum){
            return true;
        }
    }
    return false;
}


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

   cout<<prefixSuffixSum(arr, n);
}
