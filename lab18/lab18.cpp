// Created by Jamie hayes
// Created on 11/07/16
// Tiltle: 4.4 lab - string class
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/* Description: This program is responsible for creating user names for a new 
website you have created.  It should accept a first name of up to 10 characters
and a last name of up to 20 characters.  It should tell the user if the name is
larger than the max size.  It should also determine if the names are the same and 
output a warning.  After checking these things, it should create three different 
user name options (for example: apbrowne; aprilbrowne; abrowne).
*using only string tools 
*/

int main () {
    istringstream inSS;     // input string stream
    string stringline;      // holds line of text
    string firstName;       // fisrt name from user input
    string lastName;        // last name from user input 
    bool inputDone = false; // flag to indicate test iteration
    
    // Prompt user for correct input
    cout << "To complete your new website please enter your fisrt name: " << endl;
    cin >> firstName;
    
    cout << "Please enter your last name: " << endl;
    cin >> lastName;
    
    // size limits
    if (firstName.length() > 10) {
        cout << "Warning too many characters" << endl;
    }
    else if (lastName.length() > 20) {
        cout << "Warning! too many charaters" << endl;
    }
    // check to make sure the names are different 
    else if (firstName == lastName) {
        cout << "Warning! Both entery names cannot be the same" << endl;
    }
    
    //username set up
    string userName1;
    string userName2;
    string userName3;
    
    cout << "Which user name display would you like for your new website?" << endl; 
    
    userName1 = firstName.replace(2,4,lastName);
    cout << userName1 << endl;
    
    userName2 = firstName.append(lastName);
    cout << userName2 << endl;
    
    userName3 = firstName.at(0) 
    cout << username3 << lastName << endl;
    
    cout << " we hope you like youe user name creations!" << endl;
    
    cout << " To exit hit done!" << endl;
    
    return 0;
}