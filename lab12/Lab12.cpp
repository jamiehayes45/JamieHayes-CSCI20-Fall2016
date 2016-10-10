// Created by Jamie Hayes
// Created on 10/9/16
// lab 12 Nested If and Switch Case
#include <iostream> 
#include <string>
using namespace std;

/* Lab 12 uses the flowchart "what is your animal type" provided in class.
The program tells the type of animal you are based on your preferences to the 
yes or no questions below.
*/
int main () {
    char outdoorsInput = 'y';
    char runInput = 'y';
    char cheeseInput;
    char swimInput;
    
    cout << "Enter y or n ONLY for the following questions" << endl;
    // y = yes, n = no and to avoid logic error such as Y or NO
    
    cout << "Do you like the outdoors?" << endl;
    cin >> outdoorsInput;
    cout << endl;
    
    if(outdoorsInput == 'y') {
        cout << "Do you like to run?" << endl;
        cin >> runInput;
        cout << endl;
    }
        else(outdoorsInput == 'n') ;{
            cout << "Do you like cheese?" << endl;
            cin >> cheeseInput;
            cout << endl;
        }
        switch(runInput) {
           case'y':
            cout << endl << "You are a horse" << endl;
            break;
            case'n':
            cout << endl << "You are a turtle" << endl;
    }
    if (cheeseInput == 'y') {
        cout << "You are a mouse" << endl;
    }
    else if (cheeseInput == 'n') {
        cout << "Do you like to swim?" << endl;
        cin >> swimInput;
        cout << endl;
    }
        if (swimInput =='y') {
            cout << "You are a fish" << endl;
        }
        else (swimInput =='n') ;{
            cout << "You are a cat" << endl;
        }
    
}
