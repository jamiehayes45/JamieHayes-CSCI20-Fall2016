// Created by Jamie Hayes 
// Description: copyright for ascii
// Titile: lab six Intro to Functions
// Class: CSCI-20-Fall 2016 MW programming 1
#include <iostream>
#include <string>
using namespace std;

void copyRight () // function
{
    string creator = "Jamie Hayes";
    string copyright = "Copy Right";
    int year = 2016;
    
    // ascii of R2D2 from star wars 
    
    cout << "       ________       " << endl;
    cout << "      /    (0)  Y     " << endl;
    cout << "   __|__________|__   " << endl;
    cout << "  |  |   * * *  |  |  " << endl;
    cout << "  |__|    R2D2  |__|  " << endl;
    cout << "   | |    (^)   | |   " << endl;
    cout << "   | |_____:____| |   " << endl;
    cout << "  |~  `________/  ~|  " << endl;
    cout << "  / = |  / = |  / = | " << endl;
    cout << " (____] (____] (____] " << endl;
    cout << endl;
    
    cout << " Star Wars R2D2 " << endl;
    cout << endl;
    cout << creator << " " << copyright << " " << year << endl;
    
}

int main () 
{
    // calls function
    copyRight(); 
    
    //Previous lab----------
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