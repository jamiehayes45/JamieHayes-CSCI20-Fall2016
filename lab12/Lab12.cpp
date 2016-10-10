// Created by Jamie Hayes
// Created on 10/9/16
// lab 12 Nested If and Switch Case
#include <iostream> 
using namespace std;

/* Lab 12 uses the idea of a flowchart 
The program tells the type of food you like 
yes or no questions below.
*/
int main () {
    char pizzaInput;
    char cheeseInput;
    char fruitInput;
    char veggieInput;
    
    cout << "Enter y or n ONLY for the following questions" << endl;
    // y = yes, n = no and to avoid logic error such as Y or NO
    
    cout << "Do you like pizza?" << endl;
    cin >> pizzaInput;
    cout << endl;
    
    if(pizzaInput == 'y') {
        cout << "Do you like cheese?" << endl;
        cin >> cheeseInput;
        cout << endl;
    }
        else if(pizzaInput == 'n') ;{
            cout << "Do you like fruit?" << endl;
            cin >> fruitInput;
            cout << endl;
        
        switch(fruitInput) {
           case'y':
                cout << endl << "You are healthy" << endl;
                break;
            case'n':
                cout << endl << "You are unhealthy" << endl;
                break;
        }
    };
    if (cheeseInput == 'y') {
        cout << "You are a cheese lover" << endl;
    
    else if (cheeseInput == 'n') {
        cout << "Do you like veggie?" << endl;
        cin >> veggieInput;
        cout << endl;
        if (veggieInput =='y') {
            cout << "You are a vegetarian" << endl;
        }
        else if(veggieInput =='n') ;{
            cout << "You have a weird diet" << endl;
        }
    }
}
