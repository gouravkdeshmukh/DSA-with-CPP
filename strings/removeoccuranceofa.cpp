#include<bits/stdc++.h>
using namespace std;


int main(){
    string str;
    cin>>str;

    string res = "";

    for(int i = 0; i < str.size(); i++){
        if(str[i] != 'a'){
            res += str[i];
        }
    }
    cout<<res<<endl;

}