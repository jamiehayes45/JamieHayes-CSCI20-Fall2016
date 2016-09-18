// Created by Jamie Hayes program 1, assignment 1 variables
// Calculate weekly wages with seventeen percent tax deduction 
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int workerNam = 0; // enter employee name john doe
    double numHour = 6.0; // number of hours worked in one week john doe
    double weekRate = 8.50; // hourly wage for john doe
    double grossPay = 51; // rate times hours for john doe
    double netPay = 0.0; // gross pay times .83 for john doe
    
    cout << " Enter Name: "; // example one john doe 
    cin >> workerNam;
    cout << endl;
    
    cout << " Number of hours worked in one week: "; 
    cout << numHour << endl;
    
    cout << " Rate: ";
    cout << weekRate << endl;
    
    cout << " Gross pay earned in one week: ";
    cout << grossPay << endl; // 8.50 times 6
    
    netPay = grossPay*.83; // 17 minus onehunred is eightythree
    // equation to solve for net pay 
    
    cout << "Final net payment is: ";
    cout << netPay;
    cout << endl;
    
    return 0;
}
