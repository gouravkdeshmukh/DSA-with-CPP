#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix( vector <string> &str){

        //sorting the given array of strings to avoid
        sort( str.begin(), str.end());

        //first string
        string s1 = str[0];
        //second string
        string s2 = str[str.size() - 1];

        int i = 0 , j = 0;

        string result = "";

        while( i  < s1.size() && j < s2.size() ){
            if( s1[i] == s2[j] ){
                result += s1[i];
                i++; j++;
            }
            else{
                break;
            }
        }
        return result;
}

int main(){
    int n;
    cin>> n;

    vector <string> str (n);

    for(int i= 0 ; i< n ; i++){
        cin>> str[i];
    }

    cout<<"longest common prefix string is : " <<longestCommonPrefix(str);
}