#include<bits/stdc++.h>
using namespace std;

bool isPalindrom( int num , int *temp){
    if(num >= 0 and num <= 9){
        int lastdigit = (*temp)%10;
        (*temp) /= 10;
        return (num == lastdigit);
    }
    bool result =  isPalindrom(num/10, temp) and (num % 10 == (*temp) % 10);
    (*temp) /= 10;
    return result;

}

int main(){
    int num ;
    cin>>num;

    int anothernum  = num;
    int *temp = &anothernum;

    if(isPalindrom(num, temp)){
        cout<<"Palindrom";
    }
    else{
        cout<<"Not Palindrom";
    }
}