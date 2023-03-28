#include<iostream>
#include<vector>
using namespace std;

int main(){


    //without size dynamic vector

    
    // vector <int> v;

    //for loop
    // for(int i = 0; i < 5; i++){
    //     int element;
    //     cin>>element;
    //     v.push_back(element);
    // }

    // for(int i = 0; i < v.size(); i++){
    //     cout<<v[i]<<" ";
    // }


    //with size 

    vector <int> v(5);

    for(int i = 0; i < v.size(); i++){
        cin>>v[i];
    }

    for(int ele : v){
        cout<<ele<<" ";
    }


}
