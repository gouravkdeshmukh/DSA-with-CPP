#include <bits/stdc++.h> 

using namespace std;

class Car{
    public:
    int noOfGear;
    string color;
    // Write your constructor and printCarInfo method here.
    
    Car(int  noOfGear, string color){
        // this->noOfGear = noOfGear;
        // this->color = color;
    }
    
    void printCarInfo()
    {
        cout<<noOfGear<<endl;
        cout<<color<<endl;
    }
};


class RaceCar: public Car {
    public:
    int maxSpeed;
    // Write your constructor and printRaceCarInfo method here.
    RaceCar(int noOfGear, string color, int maxSpeed){
        this->noOfGear = noOfGear;
        this->color = color;
        this->maxSpeed = maxSpeed;
    }
    
    void printRaceCarInfo(){
        cout<<noOfGear<<endl;
        cout<<color<<endl;
        cout<<maxSpeed<<endl;
    }

};


int main() {
    int noOfGear, maxSpeed;
    string color;
    cin >> noOfGear >> color >> maxSpeed;
//     RaceCar raceCar(noOfGear, color, maxSpeed);
//     raceCar.printInfo();
    RaceCar racecar(noOfGear,color,maxSpeed);
     racecar.printRaceCarInfo();
    return 0;
}