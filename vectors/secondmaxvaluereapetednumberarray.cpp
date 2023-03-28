#include<bits/stdc++.h>
using namespace std;

int secondMaxElement(int arr[], int n){
    int max = INT_MIN;
    int secondMaxElement = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];  
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > secondMaxElement && arr[i] != max){
            secondMaxElement = arr[i];
        }
    }
    return secondMaxElement;
}


int main(){
    int arr[]= {2,3,4,5,7,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    // int maxElementIdx = secondMaxElement(arr, n);
    // int largestElement = arr[maxElementIdx];
    // for(int i = 0; i < n; i++){
    //     if(arr[i] == largestElement)
    //         arr[i] = -1;x
    // }
    int second_MaxElement = secondMaxElement(arr, n);
    cout<<second_MaxElement;

}