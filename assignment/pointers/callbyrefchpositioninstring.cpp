#include<bits/stdc++.h>
using namespace std;

void compute(string s, char c, int *first, int *last){
    for(int i=0; i<s.size(); i++){
        if(s[i]==c){
            *first = i;
            break;
        }
    }
    for(int i=s.size(); i>=0; i--){
        if(s[i]==c){
            *last = i;
            break;
        }
    }
}

int main(){
    string s = "gourav";
    char c = 'a';
    int firsti = -1;
    int lasti = -1;

    int *f = &firsti;
    int *l = &lasti;

    compute(s,c, f, l);

    cout<<firsti<<" "<<lasti<<endl; 
}