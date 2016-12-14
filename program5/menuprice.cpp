#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;

int main () {
    // list of menu choices for a graphic desgin commission
    int j = 0;
    int i = 0;
    string endProgram = "done";
    int optionsSelected = 0; // allows for user input 
    string menuOption; // menu item number 0-6 of general commision type
    float Averagetime; // matching average of time spent on commision type
    
    // list of commission options / with its corrisponding average complition time
    menuOption[0] = "Brand/ company logo";  Averagetime[0] = 10.50; // hours and minutes
    menuOption[1] = "Photoshop";            Averagetime[1] = 24.50;
    menuOption[2] = "Infographic";          Averagetime[2] = 48.00;
    menuOption[3] = "Text or cligraphy";    Averagetime[3] = 30.50;
    menuOption[4] = "100+ vector graphic";  Averagetime[4] = 48.75;
    menuOption[5] = "3D sculpt Zbrush";     Averagetime[5] = 72.00;
    menuOption[6] = /0; // null element 
    
    cout << "Welcome to Mydesgin Lab!" << endl;
    cout << endl;
    cout << "Here is a list of your five commission options:" << endl;
    cout << "Please place your order below to get started!!:" << endl;
    
    // list menu in order so the customer can read it
    for (int j =0; j < 6; j++) {
        cout << j << "-" << menuOption[j] << endl;
    }
    
    // list average amount of time it takes to complete
    for (int i = 0; i < 6; i++) {
        cout << i << "-" << Averagetime[i];
    }
    
    // equation for customer order slections
    for (i = 0; i <= 6; i++) {
        int optionsSelected = 0;
        cout << "Enter the number of the commission type you want 0-5" << endl;
        cin >> optionsSelected;
        } 
    
    // finish ordering and complete menu options
    if (endProgram == "done") {
         cout << "Your order is complete" << endl;
     // send off to customer after they finish ordering
    cout << "Thank you our valued customer for chosing Mydesgin Lab!" << endl;
    cout << "Enjoy and remember to rate us in customer satisfaction!" << endl;
    }
    
    return 0;
}
