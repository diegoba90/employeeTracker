/*
Diego Acuna
04/07/20
 
Employee Class
*/

#include <string>
#include "employeeClass.h"

using namespace std;


//implement the functions defined in the class header file

//construct function
employee::employee(){
    //initialization of variables from the private section of the class
    id = 0;
    name = "";
    depName = "";
    salary = 0;
}

//set functions
void employee::setID(int newID){
    id = newID;
}
void employee::setName(string newName){
    name = newName;
}
void employee::setDepName(string newDepName){
    depName = newDepName;
}
void employee::setSalary(int newSalary){
    salary = newSalary;
}

//get functions
int employee::getID(){ return id; }
string employee::getName() { return name; }
string employee::getDepName() { return depName; }
int employee::getSalary() { return salary; }
    

