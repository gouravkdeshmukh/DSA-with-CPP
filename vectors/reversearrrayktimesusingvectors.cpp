#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {1,2,3,4,5};
    int n = v.size();
    
    int k = 2;
    k  = k%n;

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin()+k);
    reverse(v.begin()+k, v.end());

    for(int ele:v){
        cout<<ele<<" ";
    }    
}