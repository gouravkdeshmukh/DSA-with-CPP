#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;
     for(int i=0; i<5; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    bool flagsorted = true;

    for(int i=1; i < v.size(); i++){
        if(v[i] <= v[i-1]){
            flagsorted = false; 
        }
    }

    cout<<flagsorted<<endl;


}