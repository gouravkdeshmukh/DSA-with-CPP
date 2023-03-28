#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;

    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity  : "<<v.capacity()<<endl;

    v.resize(1);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity  : "<<v.capacity()<<endl;

    v.resize(2);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity  : "<<v.capacity()<<endl;

    v.resize(3);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity  : "<<v.capacity()<<endl;

    v.resize(4);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity  : "<<v.capacity()<<endl;

    v.resize(5);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity  : "<<v.capacity()<<endl;

    v.resize(10);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity  : "<<v.capacity()<<endl;
}