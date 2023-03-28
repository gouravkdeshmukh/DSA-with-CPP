#include<bits/stdc++.h>
using namespace std;


string stringSort(string str){

    //creating freq vector of size 26
    vector <int> freq (26,0);

    //storing the freq of characters of string in freq array;
    for(int i = 0 ; i < str.length() ; i++){
        int index = str[i] - 'a';
        freq[index]++;
    }

    //creating sorted string in string
    int j = 0 ;
    for( int  i = 0;  i < 26; i++){
        while(freq[i]--){
            str[j++] = i + 'a';
        }
    }

    return str;

}

int  main(){
    string str;
    // cin>>str;

    cout<<stringSort("star")<<endl;

    return 0;
}