#include<bits/stdc++.h>
using namespace std;

class Hero{
    
    private:
    string name = "Gourav";
    int health = 80;
    char level = 'A';


    public:
    void print(){
        cout<<"name: "<<name<<endl;
        cout<<"health: "<<health<<endl;
        cout<<"level: "<<level<<endl;
    }
};


int main(){
    Hero h1;
    h1.print();
}