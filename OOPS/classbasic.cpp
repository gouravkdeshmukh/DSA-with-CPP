#include<bits/stdc++.h>
using namespace std;

class Hero {

    //properties
    // public:
    string name;
    int health;
    char level;

    public:

    void setname(string s){
        name = s;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(char l){
        level = l;
    }
    
    string getname(){
        return name;
    }

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

};

// void Hero::getvalue(10)
// {
//     return health;
// }

int main(){
    //creatin of hero instance

    //static allocation
    Hero h1;
    h1.setname("Gourav");
    h1.sethealth(20);
    h1.setlevel('A');
    cout<<"name = "<<h1.getname()<<endl;
    cout<<"health ="<<h1.gethealth()<<endl;
    cout<<"level ="<<h1.getlevel()<<endl;

    // cout<<"health ="<<h1.getvalue();
    // cout<<sizeof(h1)<<endl;
    // cout<<h1.name<<endl;
    // cout<<sizeof(h1.name)<<endl;
    // cout<<sizeof(h1.health)<<endl;
    // cout<<sizeof(h1.level);

    //dyanmic allocation
    Hero *h2 = new Hero();
    cout<<h2->getname()<<endl;
    cout<<h2->getlevel()<<endl;
    cout<<h2->gethealth();
}