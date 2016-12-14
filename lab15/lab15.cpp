/* Created by Jmaie Hayes
* Created on 10/26/16
* Title: Single Dimensional Arrays */
#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;

/*Description: This program is a menu program. With ten different items on the menu a user can choose from.
* This program will allow a user to choose an item until they are done.
*/

int main () {
    // list of menu choices of a Japanese Resturant in Chico 'Izakaya Ichiban'
    int optionsSelected = 0;
    int j = 0;
    int i = 0;
    string menuOption[11];
    
    // list starts with appetizers like soup and salad, then to the main dishes based on their menu
    menuOption[0] = "steamed rice";
    menuOption[1] = "miso";
    menuOption[2] = "takoyaki";
    menuOption[3] = "poki salad";
    menuOption[4] = "udon ramen";
    menuOption[5] = "unagi roll";
    menuOption[6] = "sashimi tuna";
    menuOption[7] = "oyaku don";
    menuOption[8] = "teriyaki"; 
    menuOption[9] = "katsu curry";
    
    cout << "Welcome to Izakaya Ichiban! in Chico!" << endl;
    cout << "Please place your order here!!!:" << endl;
    
    cout << "Here is the list of your ten menu options:" << endl;
    // list menu in order
    for (int j =0; j < 10; j++) {
        cout << j << "-" << menuOption[j] << endl;
    }
    
    // equation for customer order slections
    for (i = 0; i <= 10; i++) {
        optionsSelected = 0;
        cout << "Enter the number of an item you want off the menu o-9" << endl;
        cin >> optionsSelected;
        } 
            
    // finished ordering
    if (menuOption[i] != "done") {
    cout << "When your are done ordering please eneter done to quit." << endl;
         cout << "done-order complete" << endl;
    }  

    cout << "Great choice! Enjoy and remember to vote for us in taste of Chico!" << endl;
   
    cout << "Please come again!" << endl;
    
    return 0;
}
