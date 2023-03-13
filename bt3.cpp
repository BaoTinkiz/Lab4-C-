#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

class RetailItem{
    string Description;
    int UnitsOnHand;
    double Price;

    public:
    RetailItem(string description, int unitsonhand, double price ){
        this->Description = description;
        this->UnitsOnHand = unitsonhand;
        this->Price = price;

    }

    string getDescription(){
        return this->Description;
    }
    void setDescription(string description){
        this->Description = description;
    }
    int getUnitsOnHand(){
        return this->UnitsOnHand;
    }
    void setUnitsOnHand(int unitsonhand){
        this->UnitsOnHand = unitsonhand;
    }
    double getPrice(){
        return this->Price;
    }
    void setPrice(int price){
        this->Price = price;
    }

    void display(){
        cout<< this->Description <<" - "<< this->UnitsOnHand <<" - "<< this->Price <<endl;
    }
};
int main(){
    RetailItem Item1("Jacket",12,59.95);
    RetailItem Item2("Designer Jeans",40,34.95);
    RetailItem Item3("Shirt",20,24.95);
    Item1.display();
    Item2.display();
    Item3.display();
}