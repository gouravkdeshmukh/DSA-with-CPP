#include<bits/stdc++.h>
using namespace std;

string longestOnesSubString(string binary, int k){
    int zero_count = 0;
    int max_length = 0;
    int start = 0;
    int end;
    for(end = 0; end  < binary.length(); end++){
        
        if(binary[end] == '0'){
                zero_count++;
        }
         while(zero_count > k){
            if(binary[start] == '0') zero_count--;
            start++;
          
        }

        max_length = max(max_length, end-start+1);
    }
    cout<<max_length<<endl;
}

int main(){
    string binary;
    cout<<"enter the binary string";
    cin>>binary;

    int k ;
    cout<<"enter max flips";
    cin>>k;

    longestOnesSubString(binary, k);
}