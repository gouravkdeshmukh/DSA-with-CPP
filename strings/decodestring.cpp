#include<bits/stdc++.h>
using namespace std;

string decodeString(string str){
        string result = "";

        //traversing the string
        for(int i = 0; i < str.length(); i++){
            if(str[i] != ']'){
                result.push_back(str[i]); 
            }

            else {
                string str = "";
                //Extract str form result
                while(!result.empty() && result.back() != '['){
                    str.push_back(result.back());
                    result.pop_back();
                }

                //reverse the str
                reverse(str.begin(), str.end());

                //remove the last character
                result.pop_back();

                //extract the number from result
                string num = "";
                while(!result.empty() && ( result.back() >= '0' && result.back() <= '9' )){
                    num.push_back(result.back());
                    result.pop_back();
                }

                //reverse the num string
                reverse(num.begin(),num.end());

                //convert the number string into  number using stoi
                int int_num = stoi(num);

                //insert the str into result int_num times
                while(int_num){
                    result += str;
                    int_num--;
                }


            }
        }
        
        return result;

}


int main(){
    string str;
    cin>>str;

    cout<<decodeString(str)<<endl;

    return 0;
}