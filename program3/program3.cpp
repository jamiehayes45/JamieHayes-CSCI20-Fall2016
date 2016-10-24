//Created by Jamie Hayes
// Created on 10/24/16
#include <iostream>
#include <string>
#include <ctime>
using namescpace std;

/* This program is based on the game rock, paper, sisscocrs. The computer
* chooses from three options and user only chooses one. The game will play
* best out of 3, 5, or 7 rounds. Then the game will score the user based on 
* how many they win
*/

// class set up for computer compiler and first user choice
void int gameRound (int userChoice) {
    int Score;
    srand (time(0));
    int compChoice = (rand() % 3 ) +1; // This equations allows for the computer to choose from three random numbers.
    
    return;
}
// if a tie between the compputer and user shiuld occur
void int gameRound (int compUserTie) {
    if (compChoice == userChoice) {
        cout << "A tie has occured between the user the computer. This counts as one round." << endl;
        
        return;
    }
}
// class set up for declaring if the user won or lost when the computer chose rock
void if (userChoice == 1) {
    if (compChoice ==1) {
        if compChoice ==2) {
            Score =Score;
            cout << "Computer chose rock, while the user chose paper." << endl;
            cout << "User wins this round." << endl;
        }
    }
    else if (compChoice ==3) {
        Score == Score + 1; 
        cout << "Computer chooses rock, while the user chose sisscocrs." << endl;
        cout << "User loses, Computer wins this round." << endl;
    }
    else (comChoice ==2) {
        if ()
    }
}