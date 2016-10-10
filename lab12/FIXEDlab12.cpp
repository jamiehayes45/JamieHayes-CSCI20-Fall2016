/* Created by Jmaie Hayes 
*Created on 10/9/16
*/
#include <iostream>
#include <string>
using namespace std;

/* Lab 12 is a program based on the animal flowchart provided in class. 
* The following program determines your animal type, depending on the users
* yes or no preferences.
*/

int main () {
    char outdoorsUser;
    char runUser;
    char cheeseUser;
    char swimUser;
    
    // y = yes, n = no
    cout << "Answer the following question with y or n ONLY." << endl; // to avoid logic error like Y or NO

    cout << "Do you like the outdoors? " << endl;
    cin >> outdoorsUser;
    
    /* Below uses switch/break statements for the flow chart the chooses yes to liking the outdoors.
    * While the second part of this program uses if/else statements, if a user choses no they dont like the outdoors. 
    * All the following inputs match its corresponding output based on the users choice of preference via yes or no
    */
    switch (outdoorsUser) {
        case 'y' :
            cout << "Do you like to run ?" << endl;
            cin >> runUser;
            cout << endl;
            break;
        case 'n' :
            cout << " Do you like cheese?" << endl;
            cin >> cheeseUser;
            cout << endl;
            break;
    }
    // Continues input for runuser and cheeseuser
    switch (runUser) {
        case 'y' :
            cout << "You are a horse! " << endl;
            break;
        case 'n' :
            cout << "You are a turtle!" << endl;
            break;
    };
    
    // nested if statement for the other half of the flowchart, cheese and swim options
    if (cheeseUser == 'y') {
        cout << "You are a mouse" << endl;
    }
    else if (cheeseUser == 'n') {
        cout << "Do you like to swim? " << endl;
        cin >> swimUser;
        cout << endl;
    
        if (swimUser == 'y') {
            cout << "You are a fish" << endl;
        }
        else if (swimUser == 'n'); {
            cout << "You are a cat" << endl;
        }
    }
}
