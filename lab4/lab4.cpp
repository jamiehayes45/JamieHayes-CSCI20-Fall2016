//Created by Jamie Hayes
//Created on 8/29/16
// Title lab 4- 1.3 mad libs 
#include <iostream>
#include <string>
using namespace std;

// Description: this program is designed to generate-output a madlib with the users input

int main ()
{
    int favoriteNum; // users favorite number
    float decimal; // 0.0 
    char letter; // alphabet a-z
    string adjective; //users choice 
    
    cout << "Let's play a mad lib game!!!" << endl;
    
    // asks user questions
    cout << "What is your favotite large number?" << endl;
    cin >> favoriteNum;
    cout << endl;
    
    cout << "Please choose any decimal number" << endl;
    cin >> decimal;
    cout << endl;
    
    cout << "Please choose a leter between a-z: " << endl;
    cin >> letter;
    cout << endl;
    
    cout << "Please choose an adjective: " << endl;
    cin >> adjective;
    cout << endl;
    
    cout <<"A "<< adjective <<" whale was seen floating "<< decimal;
    cout <<" feet in the air. Mean while, as the whale floated in the air, a hellium balloon truck ";
    cout << "crashed on "<< letter <<" street in Sacramento. The sheer amount of ";
    cout << favoriteNum <<" balloons pushed the "<< adjective;
    cout <<" whale all the way back to the sea. However, the whale was still stuck "<< decimal;
    cout <<" feet above the ocean's surface. The poor thing."<< endl;
    
    cout <<"Finished! Thanks for playing!"<< endl;
    
    return 0;
}