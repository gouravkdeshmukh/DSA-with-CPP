#include<bits/stdc++.h>
using namespace std;

class Hero{

    
    int health;
    char level;
    string name ;
public:
    Hero(){
       
        health = 0;
        level = 'D';
    }

    
    void set(string name,int h, char c);
    void print();
    
};

void Hero::set(string name, int health, char level){
    this->name = name;
        this->health = health;
    this->level = level;
}

void Hero::print(){
    cout<<name<<"" <<health<<" "<<level<<endl;
}

int  main(){
    Hero h1 ;
    h1.set("gourav", 70,'B');
    h1.print();
}
