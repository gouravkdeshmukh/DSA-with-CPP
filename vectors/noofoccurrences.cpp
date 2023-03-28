#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;

    for(int i=0; i<10; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    cout<<"key :";
    int key ;
    cin>>key;
    int occurrences = 0;
    for(int i = 0 ; i< v.size(); i++){
        if(key == v[i]) 
            occurrences++;
    }

    cout<<"no. of occurrences :"<<occurrences;
}
