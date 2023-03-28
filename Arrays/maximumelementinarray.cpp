#include<iostream>
using namespace std;

int main(){
    int size = 0,  max;
    cout<<"Size : ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    max =arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"Max : "<<max;
}