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

    int sumEvenOdd = 0;
    for(int i=0; i<v.size(); i++){
        if(i%2 == 0){
            sumEvenOdd += v[i];
        }
        else {
            sumEvenOdd -= v[i];
        }
    }

    cout<<"sum of even odd indexs are : "<<sumEvenOdd<<endl;


}