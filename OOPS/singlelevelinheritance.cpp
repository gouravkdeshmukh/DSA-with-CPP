#include<bits/stdc++.h>
using namespace std;

class Human{
    
    public:
    string name = "abc";
    int height = 150;
    int age = 23;


    
    // void print(){
    //     cout<<"name: "<<name<<endl;
    //     cout<<"height: "<<height<<endl;
    //     cout<<"age : "<<age<<endl;
    //     cout<<"hi"<<endl;
    // }
};

class Male : public Human{
    public:   
     string colour = "fair";

    void print(){
        cout<<"name: "<<name<<endl;
        cout<<"height: "<<height<<"cm"<<endl;
        cout<<"age : "<<age<<"yrs"<<endl;
        cout<<"color : "<<colour<<endl;
    }
    void maleSleept(){
        cout<<"maleSleept"<<endl;
    }
};


int main(){
    // Human h1;
    // h1.print();
    Male m1;
    m1.print();
    cout<<m1.height;
    m1.maleSleept();
}