#include<bits/stdc++.h>
using namespace std;

string removea(string s, int idx, int n){
    if(idx == n) return "";
    string curr = "";
    curr += s[idx];
    return ((s[idx] == 'a') ? "" : curr) + removea(s, idx+1, n);
}

int main(){
    string str = "abcax";
    // cin>>str;
    int n = str.size();
    int idx = 0;

    cout<<removea(str,idx,n);
}