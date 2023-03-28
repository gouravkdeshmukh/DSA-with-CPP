#include<iostream>
using namespace std;

int f(int *arr, int idx, int n ){
    
    if( idx == n-1 ) return arr[idx];

    return max(arr[idx] , f(arr,idx+1, n));

}

int main(){
    int arr[] = {3,10,2,1,5};
    int n =5;
    int result  = f(arr,0,n);
    cout<<result<<endl;
}