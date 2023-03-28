#include<iostream>
using namespace std;

int main(){
    int size = 0,sum=0;
    cout<<"size of array: ";
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        sum += arr[i];
    }

    cout<<"sum of array: "<<sum;

    return 0;
}