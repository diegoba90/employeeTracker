/*
Diego Acuna - S00369466
CSCI 3000, HW 5
04/07/20
 
Employee Class Header File
*/

#include <string>
using namespace std;

//this is the employee class that will have several functions to include get/set and construct functions
class employee{
//private variables that cannot be changed
private:
    int id;
    string name;
    string depName;
    int salary;

//public variables with member functions
public:
    //constructor function
    employee();
    
    //set function to set ID, name, depName and salary
    void setID(int);
    void setName(string);
    void setDepName(string);
    void setSalary(int);
    
    //set of get functions to get values for id, name, depName and salary
    int getID();
    string getName();
    string getDepName();
    int getSalary();
    
    //print employee imformation function
    void printAll();
 
    

};

