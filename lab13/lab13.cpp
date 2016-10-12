// Created by Jamie Hayes
// Created on 10/12/16 
// Title: Lab 13 Looping
#include <iostream>
#include <string>
using namespace std;

/* This program will print every value between two minutes
* Very similar to a stopwatch, the program will first print every minute between 1:00 pm-2:59pm
* Then for every 15 minutes
*/

int main () { 
    // firts part of the program
    int valueHour = 1; // beging of time sequence from 1 - 2:59pm
    int valueMin =0; // minute variable

cout << "List of every minute between 1:00pm to 2:59pm :" << endl; 

// output of every minute between one to two pm  using a while statement
while(valueHour <=2 && valueMin < 60) { // equation for setting up parameter
    if (valueMin < 10 ) {
        cout << "1:0"<< valueMin << "pm"; 
        cout << endl;
    }
    else { 
        cout << "1:" << valueMin << "pm"; // default if otherwise not stated in if statment
        cout << endl;
    }
    ++valueMin; //operation allows
}
// output of every minute between 2:00 - 2:59pm using a while statement
while (valueHour <=2 && valueMin < 60) {
    if (valueMin < 10) { 
        cout << "2:0" << valueMin << "pm"; // anything greater than ten while include a zero
        cout << endl;
    }
    else {
        cout << "2:" << valueMin << "pm";
        cout << endl;
    }
    ++valueMin;
}

    // second part of the program - user chooses time variable and program will output fifteen minute variables
    // variable names of start and stop times 
    int startHour =0;
    int endHour =0; // Ending hour variable either 1 or 2
    int minutes = 0;
    // input and ouput for starting time of users choice 
    cout << "Enter starting value between any two time variable" << endl; // avoid logic error
    cin >> startHour;
    cout << endl;
    
    // ending time of users choice -input 
    cout << "Enter ending hour value, between any two time varibales" << endl; // avoid logic error
    cin >> endHour;
    cout << endl;
    
    // print 15 minute interval between user's choice of starting time
    char ap;
    cout<<"If you choose an afternoon time input lower case p, or lower-case a' to indicate morning time" << endl;
    cin>>ap;
    if(ap == 'p') {
    while (startHour < endHour) {
        if(minutes>=60) {
            minutes = 0;
            startHour = startHour + 1;
        }
        if(startHour < endHour) {
        minutes = minutes + 15;
        cout << startHour<< minutes << "pm" << endl; // print statement 
        } 
    }
    }
    else if(ap== 'a') {
         while (startHour < endHour) {
        if(minutes>=60) {
            minutes = 0;
            startHour = startHour + 1;
        }
        if(startHour < endHour) {
        minutes = minutes + 15;
        cout << startHour<< minutes << "am" << endl; // print statement
        } 
    }
}
}
    