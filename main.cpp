/*
Diego Acuna 
04/07/20
*/

#include <iostream>
#include <string>
#include <fstream>
#include "employeeClass.h"

using namespace std;

//function prototypes
int userMenu(int); //displays menu and returns user choice
void printAll(employee[], int); //when user enters 1
void printByDept(employee[], int); //when user enters 2
void printBySalary(employee[], int); //when user enters 3
void wholeProgram(); //runs the menu

//main function
int main(){
    
    //run the program
    wholeProgram();
    //signature
    cout << endl;
    cout << "Thanks! Please come again.\n"
    << "This program was coded by Diego Acuna." << endl;
    
    return 0;
}

//user menu function
int userMenu(int choice){
    //header
    cout << "\t\tWelcome to the program!!" << endl;
    cout << endl;
    //menu
    cout << "Choose from the following menu options:\n"
         << "1) Print All Employees\n" // will call printAll function
         << "2) Print By Department\n" // will call printByDept function
         << "3) Print by Salary\n" // will call printBySalary function
         << "4) Exit" << endl; //exits program
    
    cout << "Enter choice: ";
    cin >> choice;
    
    //check user choice
    while (choice < 1 || choice > 4){
        cout << "Invalid choice! Please enter value 1-4: ";
        cin >> choice;
    }
    
    return choice;
}

//menu option 1 function
void printAll(employee empData[], int x){
    //header
    cout << "Employee ID\t\tEmployee Name\t\tEmployee Department\t\tEmployee Salary" << endl;
    
    //use a for looo and get functions to get data from class and diplay it
    for (int i = 0; i < x; i++){
        cout << "\t" << empData[i].getID() << "\t\t";
        cout << "\t\t" << empData[i].getName() << "\t\t";
        cout << "\t\t" << empData[i].getDepName() << "\t\t";
        cout << "\t" << "$" << empData[i].getSalary() << endl;
    }
}

//menu option 2 function
void printByDept(employee empData[], int x){
    //declare menu variable
    int choice;
    string empDep;
    
    //menu
    cout << "Please choose from one of the following departments to print data:\n"
         << "\t1) Marketing\n"
         << "\t2) Production\n"
         << "\t3) RD\n"
         << "\t4) Purchasing\n"
         << "\t5) HR\n" << endl;
    
    cout << "Print department: ";
    cin >> choice;
    
    //check user choice
    while (choice < 1 || choice > 5) {
        cout << "Invalid department. Please enter one of the 5 departments: ";
        cin >> choice;
    }
    
    //user menu
    switch (choice) {
        case 1: //when user selects marketing
            cout << "Employee ID\t\tEmployee Name\t\tEmployee Department\t\tEmployee Salary" << endl;
            //assign string to empDep
            empDep = "Marketing";
            //use a for loop to check string vs empData and use get functions to receive the data
            for (int i = 0; i < x; i++){
                if(empDep == empData[i].getDepName()){
                    cout << "\t" << empData[i].getID() << "\t\t";
                    cout << "\t\t" << empData[i].getName() << "\t\t";
                    cout << "\t\t" << empData[i].getDepName() << "\t\t";
                    cout << "\t" << "$" << empData[i].getSalary() << endl;
                }
            }
            break;
            
        case 2: //when user selects production
            cout << "Employee ID\t\tEmployee Name\t\tEmployee Department\t\tEmployee Salary" << endl;
            //assign string to variable
            empDep = "Production";
            //use a for loop to check string vs empData and use get functions to receive the data
            for (int i = 0; i < x; i++){
                if(empDep == empData[i].getDepName()){
                    cout << "\t" << empData[i].getID() << "\t\t";
                    cout << "\t\t" << empData[i].getName() << "\t\t";
                    cout << "\t\t" << empData[i].getDepName() << "\t\t";
                    cout << "\t" << "$" << empData[i].getSalary() << endl;
                }
            }
            break;
            
        case 3: //when user selects rd
            cout << "Employee ID\t\tEmployee Name\t\tEmployee Department\t\tEmployee Salary" << endl;
            //assign string to variable
            empDep = "RD";
            //use a for loop to check string vs empData and use get functions to receive the data
            for (int i = 0; i < x; i++){
                if(empDep == empData[i].getDepName()){
                    cout << "\t" << empData[i].getID() << "\t\t";
                    cout << "\t\t" << empData[i].getName() << "\t\t";
                    cout << "\t\t" << empData[i].getDepName() << "\t\t";
                    cout << "\t" << "$" << empData[i].getSalary() << endl;
                }
            }
            break;
        
        case 4: //when user selects purchasing
            cout << "Employee ID\t\tEmployee Name\t\tEmployee Department\t\tEmployee Salary" << endl;
            //assing string to variable
            empDep = "Purchasing";
            //use a for loop to check string vs empData and use get functions to receive the data
            for (int i = 0; i < x; i++){
            if(empDep == empData[i].getDepName()){
                cout << "\t" << empData[i].getID() << "\t\t";
                cout << "\t\t" << empData[i].getName() << "\t\t";
                cout << "\t\t" << empData[i].getDepName() << "\t\t";
                cout << "\t" << "$" << empData[i].getSalary() << endl;
            }
        }
        break;
            
        case 5: //when user selects hr
            cout << "Employee ID\t\tEmployee Name\t\tEmployee Department\t\tEmployee Salary" << endl;
            //assign string to variable
            empDep = "HR";
            //use a for loop to check string vs empData and use get functions to receive the data
            for (int i = 0; i < x; i++){
            if(empDep == empData[i].getDepName()){
                cout << "\t" << empData[i].getID() << "\t\t";
                cout << "\t\t" << empData[i].getName() << "\t\t";
                cout << "\t\t" << empData[i].getDepName() << "\t\t";
                cout << "\t" << "$" << empData[i].getSalary() << endl;
            }
        }
        break;
            
        default:
            break;
    }
}

//option 3 function
void printBySalary(employee empData[], int x){
    //delcare variables
    int salary;
    
    //ask user to enter dollar figure
    cout << "To compare salaries please enter a salary amount: $";
    cin >> salary;
    cout << endl;
    
    //header
    cout << "Employee ID\t\tEmployee Name\t\tEmployee Department\t\tEmployee Salary" << endl;
    
    //use for loop to laod data
    for (int i = 0; i < x; i++){
        if(empData[i].getSalary() >= salary){
            cout << "\t" << empData[i].getID() << "\t\t";
            cout << "\t\t" << empData[i].getName() << "\t\t";
            cout << "\t\t" << empData[i].getDepName() << "\t\t";
            cout << "\t" << "$" << empData[i].getSalary() << endl;
        }
    }
}

//whole program with menu interface
void wholeProgram(){
    //menu variable
    int choice;
    
    
    //load data from employee.txt file
    //open file
    ifstream inputFile;
    inputFile.open("employees.txt");
    
    //make sure file is actually open
    if (!inputFile){
        cout << "File not open";
    }
    
    //read how many employees we have for the array
    int x;
    inputFile >> x; //asssigns # of employees to file
    
    //create pointer
    employee *empData;
    //create array in the HEAP with array of x
    empData = new employee[x];
    
    //declare variables for data in the file
    int empID, empSal;
    string empName, empDeptName;
    
    //using for loop assign data
    for (int i = 0; i < x; i++){
        inputFile >> empID >> empName >> empDeptName >> empSal;
        //call set functions to assing the values from class
        empData[i].setID(empID);
        empData[i].setName(empName);
        empData[i].setDepName(empDeptName);
        empData[i].setSalary(empSal);
    }
    
    //close file
    inputFile.close();
    //use a do/while statment and switch statement to run the program
    do {
        //call usermenu function
        choice = userMenu(choice);
        
        switch (choice) {
            //user chooses option 1
            case 1:
                printAll(empData, x);
                break;
            //user chooses option 2
            case 2:
                printByDept(empData, x);
                break;
            //user chooses option 3
            case 3:
                printBySalary(empData, x);
                break;
                
            default:
                break;
        }
        
    } while (choice != 4);
}
