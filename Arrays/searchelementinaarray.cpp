#include<iostream>
using namespace std;

int main(){
    int size = 0;
    cout<<"Size : ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int key ;
    cout<<"Key : ";
    cin>>key;
    int ans = -1;

    for(int i=0; i<size; i++){

        if(key == arr[i]){
          ans = i;
        }
    
    }
    cout<<ans;
    
    
}