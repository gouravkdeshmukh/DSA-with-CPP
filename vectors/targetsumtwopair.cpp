#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,3,4,5,6,7,1};
   int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 5;
    int pair = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n;j++){
            if(arr[i] + arr[j] == sum){
                pair++;
            }
        }
    }
    cout<<pair;

}