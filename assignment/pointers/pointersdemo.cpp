#include<bits/stdc++.h>
using namespace std;

int main(){

    //create a interger variable x
    //create a integer pointer  ptr that store the address of x 
    //print the variable , address, and ptr value
    int x=4;
    int* ptr = &x;
    cout<<"x = "<<x<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl; 
    cout<<endl;

    //create a float variable y
    //create a float pointer ptrf that store the address of y
    //print the variable , address, and ptrf value
    int y= 34.4;
    int *ptrf = &y;
    cout<<"y = "<<y<<endl;
    cout<<ptrf<<endl;
    cout<<*ptrf;
}