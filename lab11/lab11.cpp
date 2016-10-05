// Created by Jamie Hayes on 10/5/16
// lab 11 from 3.2 Lab - If/Else module 
#include <iostream>
#include <string>
using namespace std;

// This program calculates the income tax, and the amount owed or to be refunded to a person or couple
int main ()
{
    int wage = 12100;                  // gross wages
    int tax = 0;                       // tax amount for adjusted gross income
    int withheild = 250;               // amount of tax withheild
    string MarriageStatus = "single";  // filing status single or married
    string userName = "Joe Vandal";    // first and last name of program users
    
    cout << "Enter your Name:";
    cin >> userName;
    cout << endl;
    
    cout << " Enter wage:";
    cin >> wage;
    cout << endl;
    
    cout << "Enter withheild amount:";
    cin >> withheild;
    cout << endl;
    
    cout << "Enter marriage status: ";
    cin >> MarriageStatus;
if((MarriageStatus == "single" )) {
    if (wage>0 && wage<=8925) {
       tax = 0.1* wage;
       cout << tax << endl;
    }
    else if(wage>=8926 && wage>=36250) {
        tax = 892.50 + 1.5; // ask for help of how to write plus percentage of the excess over a number 
        cout << tax << endl;
    }  
    else if(wage>= 36251 && wage>=87850) {
        tax = 4991.25 + 2.5; // fitme
        cout << tax << endl;
    }
    else(wage>=87851 && wage<=87851) ;{
        tax = 17891.25 + 2.8; // fixme
        cout << tax << endl;
    }
};

// tax table for married couples adjusted gross income
if else(MarriageStatus == "married") ;{
    if(wage>0 && wage>=17850) {
        tax = 0.1 * wage;
        cout << tax << endl;
    }
    else if(wage>=17851 && wage>72500) {
        tax = 892.50 + 1.5; // fixme
        cout << tax << endl;
    }
    else(wage=72501 && wage<=72501) ;{
        tax = 9982.50 + 2.8; // fixme
        cout << tax << endl;
    }
};

// compare the calculated tax with the amount withheild
if(tax > withheild) {
    cout << "you owe more tax. "<< endl;
}
 else(tax < withheild) ;{
    cout << "you are entiled to a refund." << endl;
}

 return 0; 
    
}
