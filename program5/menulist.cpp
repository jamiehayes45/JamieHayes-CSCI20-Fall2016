#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;

/*Description: This program is a menu program. With ten different items on the menu a user can choose from.
* This program will allow a user to choose an item until they are done.
*/
int main () {
    // list of menu choices for a graphic desgin commission
    int optionsSelected = 0;
    int j = 0;
    int i = 0;
    string endProgram = "done";
    string menuOption[6];
    
    // list of commission optionsin order below
    menuOption[0] = "Brand/ company logo";
    menuOption[1] = "Photoshop";
    menuOption[2] = "Infographic";
    menuOption[3] = "Custom caligraphy";
    menuOption[4] = "100+ layered vector graphic";
    menuOption[5] = "3D sculpt zbrush";
    
    cout << "Welcome to my desgin lab!" << endl;
    cout << endl; 
    cout << "Please place your order below!:" << endl;
    cout << "Here is a list of our five commission options:" << endl;
    
    // displays commission options for the user to veiw
    for (int j =0; j < 6; j++) {
        cout << j << "-" << menuOption[j] << endl;
    }
    
    // equation for customer order slection(s)
    for (i = 0; i <= 6; i++) {
        cout << "Enter the number of a commission you want off the list 0-5" << endl;
        cin >> menuOption[i]; // takes in user input
        
        // alternative command options for user comprehension 
        cout << "When your are done ordering please eneter done to quit." << endl;
        cout << "Or continue shopping." << endl;
    }
    
    // finish and complete commission order options
    if (endProgram == "done") { 
   
         cout << "Finished, your order is complete." << endl;
         cout << "Great choice! Enjoy your new art peice!" << endl;
    }

    return 0;
}