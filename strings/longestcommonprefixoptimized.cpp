#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector <string>  &str){

    //keeping first is constant and comparing all the strings with it
    string s1 = str[0];
    int res_lenght = str.size();

    for(int i  = 0 ; i< str.size() ; i++){ 

        int  j = 0;
        while( j < s1.size() && j < str[i].size() && s1[j] == str[i][j] ){
            j++;
        }
        res_lenght  = min (j , res_lenght);
    }

    return s1.substr(0, res_lenght);

}


int main(){
    int n ;
    cin>>n;


    vector <string > str (n);

    for(int  i = 0 ; i< n ;  i++ ){
        cin>> str[i];
    }

    cout<<"longest  common prefix is :  "<<longestCommonPrefix(str);
    }