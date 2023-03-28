#include<bits/stdc++.h>
using namespace std;

int secondMaxElement(int arr[], int n){
    int max = INT_MIN;
    int index;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
            index = i;   
        }
    }
    return index;
}


int main(){
    int arr[]= {2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxElementIdx = secondMaxElement(arr, n);
    arr[maxElementIdx]= -1;
    int secondMaxElementidx = secondMaxElement(arr, n);
    cout<<arr[secondMaxElementidx];

}