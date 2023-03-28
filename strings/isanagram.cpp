#include<bits/stdc++.h>
using namespace std;


bool isAnagram(string s1, string s2)
{
    //creating freq vector
    vector <int> freq(26, 0 );

    if(s1.length()  != s2.length()){
            return false;
    }

    //calculating freq of chararter of strings
    for(int  i = 0 ; i < s1.length() ; i++){
        freq[s1[i] - 'a']++;
        freq[s2[i] - 'a']--;
    }

    //checking the freq array
    for(int i= 0 ; i<26; i++){
        if(freq[i] != 0){
            return false;
        }
    }

    return true;
}

int main(){
    string s1,s2;

    // cin>>s1>>s2;

    if(isAnagram("star","rast")){
        cout<<"String is Anagram";
    }
    else{
        cout<<"String is not Anagram";
    }

    return 0;
}