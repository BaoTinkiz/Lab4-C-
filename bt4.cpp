#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

class Inventory{
    int ItemNumber;
    int Quantity;
    double Cost;
    double TotalCost;

    public:
    Inventory(){
        this->ItemNumber = 0;
        this->Quantity = 0;
        this->Cost = 0;
        this->TotalCost = 0;

    }
    Inventory(int itemNumber , int quantity , double cost ){
        this->ItemNumber = itemNumber;
        this->Quantity = quantity;
        this->Cost = cost;
        this->TotalCost = quantity*cost;

    }
    int getItemNumber(){
        return this->ItemNumber;
    }
    void setItemNumber(int itemNumber){
        this->ItemNumber = itemNumber;
    }
    int getQuantity(){
        return this->Quantity;
    }
    void setQuantity(int quantity){
        this->Quantity=quantity;
    }
    double getCost(){
        return this->Cost;
    }
    void setCost(double cost){
        this->Cost = cost;
    }
    double getTotalCost(){
        return this->TotalCost;
    }
    void setTotalCost(int quantity , double cost){
        this->TotalCost = quantity*cost;
    }
    void display(){
        cout<<this->ItemNumber<<" - "<<this->Quantity<<" - "<<this->Cost<<" - "<<this->TotalCost<<endl;
    }
};
int main(){
    Inventory Inventory1(1,12,123);
    Inventory1.display();
}