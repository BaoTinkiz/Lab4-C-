#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

class Car{

    int YearModel;
    string Make;
    int Speed;

    public:
    Car(int yearModel, string make){
        this->YearModel = yearModel;
        this->Make = make;
        this->Speed = 0;
    }
    int getSpeed(){
        return this->Speed;
    }
    void setSpeed(int speed){
        this->Speed=speed;
    }
    void Acclerate(int speed){
        this->Speed = speed + 5;
    }
    void brake(int speed){
        this->Speed = speed - 5;
    }

    void display(){
        cout << this->YearModel <<" - "<< this->Make <<" - "<< this->Speed <<endl;
    }
    void displaySpeed(){
        cout << this->Speed <<endl;
    }

};

int main(){
    Car c1(1998,"ramdom");
    for (int i=0;i<5;i++){
        c1.Acclerate(c1.getSpeed());
        c1.displaySpeed();
    }
    c1.display();
    for (int i=0;i<5;i++){
        c1.brake(c1.getSpeed());
        c1.displaySpeed();
    }
    c1.display();
}