#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin>>n;
    ll a = 0;
    ll b = 1;
    ll c = 0;

    for(int i = 2; i <= n; i++) {
        c = a + b;
        a = b;  
        b = c; 
         cout<<c << " ";
    }
    }
