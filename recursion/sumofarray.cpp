#include<iostream>
using namespace std;

int f(int *arr, int idx ,int  n){
    if(idx == n-1) return arr[idx];
 
    return arr[idx] + f(arr, idx+1, n);
}

int  main(){
    int arr[] ={1,3,5,20,1};
    int n = 5;
    int result = f(arr,0, n);
    cout<<result;
   
 }