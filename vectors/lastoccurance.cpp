#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;


    //less optimized
    // for(int i=0; i<10; i++){
    //     int ele;
    //     cin>>ele;
    //     v.push_back(ele);
    // }
    // cout<<"Element : ";
    // int key = 0;
    // cin>>key;

    // int occurence = -1;
    // for(int i=0 ; i<v.size() ; i++){
    //     if(v[i] == key){
    //         occurence = i;
    //     }
    // }

    // cout<<"lastoccurance index: "<<occurence<<endl;


    //optimized approach
     for(int i=0; i<10; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<"Element : ";
    int key = 0;
    cin>>key;

    int occurrence = -1;
    for(int i=v.size()-1; i>=0; i++){
        if(key==v[i]){
            occurrence = i;
            break;
        }
    }
    cout<<"occurrence: "<<occurrence<<endl;
}