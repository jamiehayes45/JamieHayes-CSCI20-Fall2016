/* Created by Jmaie Hayes
* Created on 10/31/16
* Title: lab 16: Parrellel Arrays */
#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;

/*Description: This program is a menu program. With ten different items on the menu a user can choose from.
* This program will allow a user to choose an item until they are done. The program will also iclude prices of the menu items 
* an intevorty. As the user purchases items the program will add the price to the total amount and subtract 1 fromt the intetory.
* Finally, output a total cost amount when the user is done shopping. 
*/

int main () {
    // list of menu choices of a Japanese Resturant in Chico 'Izakaya Ichiban'
    int j = 0;
    int i = 0;
    int inventory = 10;
    int totalPrice = 0;
    string done;
    int optionsSelected = 0; // allows for user input 
    string menuOption; // menu item number 0-9
    float price; // price of the matching selected item from the menu 0-9
    
    // list of menu options / with its corrisponding item price
    menuOption[0] = "steamed rice";  price[0] = 1.50;
    menuOption[1] = "miso";          price[1] = 1.50;
    menuOption[2] = "takoyaki";      price[2] = 4.00;
    menuOption[3] = "poki salad";    price[3] = 3.50;
    menuOption[4] = "udon ramen";    price[4] = 8.75;
    menuOption[5] = "unagi roll";    price[5] = 10.00;
    menuOption[6] = "sashimi tuna";  price[6] = 15.00;
    menuOption[7] = "oyaku don";     price[7] = 9.50;
    menuOption[8] = "teriyaki";      price[8] = 8.75;
    menuOption[9] = "katsu curry";   price[9] = 6.00;
    menuOption[10] = /0; // null element 
    cout << "Welcome to Izakaya Ichiban! in Chico!" << endl;
    
    cout << "Here is a list of your ten menu options:" << endl;
    
    // list menu in order
    for (int j =0; j < 10; j++) {
        cout << j << "-" << menuOption[j] << endl;
    }
    cout << "Please place your order here!!!:" << endl;
    
    // equation for customer order slections
    for (i = 0; i <= 10; i++) {
        optionsSelected = 0;
        cout << "Enter the number of the item you want off the menu o-9" << endl;
        cin >> optionsSelected;
        } 
         
         for (int j =0; j < 10; j++) {
             inventory[j] = inventory;
         }
         
         for (j = 0 < 10; j++) {
             if (optionsSelected[i] == menuOption[j] ) {
                 cout << menuOption[j] << "$" << price[j] << endl;
                 cout << inventory[i] - 1 << endl;
                 totalPrice += price[j];
             }
         }
    // finished ordering
    if (menuOption[i] == "done") {
    cout << "When your are done ordering please eneter done to quit." << endl;
         cin >> optionsSelected; 
         cout << "Your order is complete" << endl;
    }  

    cout << "Great choice! Enjoy and remember to vote for us in taste of Chico!" << endl;
   
    cout << "Please come again!" << endl;
    
    return 0;
}
