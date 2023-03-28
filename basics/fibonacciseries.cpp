#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin>>n;

    ll arr[n+1];
    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2; i<=n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    for(int i = 0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
}