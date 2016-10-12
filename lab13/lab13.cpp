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
    int startMin =0;
    int endMin =0; // ending minute(s) varibale between 0-59

    // input and ouput for starting time of users choice 
    cout << "Enter starting value between 9:00am to 11:00am Only" << endl; // avoid logic error
    cin >> startHour;
    cin >> startMin;
    cout << startHour << ":" << startMin << "am";
    cout << endl;
    
    // print 15 minute interval between user's choice of starting time
    while (startHour <= endHour) {
        startHour = startHour + 15;
        cout << startHour << "pm" << endl;
    }
    
    // ending time of users choice -input 
    cout << "Enter ending hour value, between 9:00am to 11:00am Only" << endl; // avoid logic error
    cin >> endHour;
    cin >> endMin;
    cout << endHour << ":" << endMin << "am"; 
    cout << endl;
    
}
    