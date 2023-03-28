#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b, result; 
    char operation;
    cout<<"enter the Operation (+,-,*,/,%) :  ";
    cin>>operation;
    cout<<"enter the Number 1 ";
    cin>>a;
    cout<<"enter the Number 2 ";
    cin>>b;

    switch(operation)
    {
        case '+':
                    result= a+b;
                    break;
                 
        case '-': 
                    result= a-b;
                    break;
                
        case'*' :
                    result= a*b;
                    break;
                
        case '/' :
                    result= a/b;
                    break;
                
        case '%' :
                    result= a%b;
                    break;
        default : cout<<"Invalid operation";
                    break;
    }

    cout<<"result: "<<result;
    
    return 0;
}