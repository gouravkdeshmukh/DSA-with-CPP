#include<bits/stdc++.h>
using namespace std;


int sorting (vector <int> &v){
    int countzeros = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i] == 0){
            countzeros++;
        }
    }

    for(int i = 0; i < v.size(); i++){
        if(i < countzeros){
            v[i] = 0;
        }
        else{
            v[i] = 1;
        }
    }
}

int main(){
    
    int n;
    cin>>n;
    vector <int> v;

    for(int i = 0; i < n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sorting(v);
    for(int i= 0; i < n; i++){ 
        cout<<v[i]<<" ";
    }
}
