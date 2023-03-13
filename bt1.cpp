#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

class Employee{

    string Name;
    int Id;
    string Department;
    string Position;

    public:
    Employee(){
        this->Name = "";
        this->Id = 0;
        this->Department = "";
        this->Position = "";
    }
    
    Employee(string name,int id,string department,string position){
        this->Name = name;
        this->Id = id;
        this->Department = department;
        this->Position = position;
    }
    Employee(string name,int id){
        this->Name = name;
        this->Id = id;
    }
  
    void Display(){
        cout << this->Name <<" - "<< this->Id <<" - "<< this->Department <<" - "<< this->Position <<endl;
    }

};
int main(){
    Employee e1("Susan Meyers",47899,"Accounting","Vice President");
    Employee e2("Mark Jones",39119,"IT","Programmer");
    Employee e3("Joy Rogers",81774,"Manufacturing","Engineer");
    e1.Display();
    e2.Display();
    e3.Display();
}
