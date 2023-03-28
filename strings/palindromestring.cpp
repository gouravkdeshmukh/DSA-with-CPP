#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int i = 0;
    int j = str.length()-1;

    while ( j > i){

        if(str[i] != str[j]){
            cout<<"string is not palindrome";
        }
        i++;
        j--;
    }
    cout<<"string is palindrome";
}