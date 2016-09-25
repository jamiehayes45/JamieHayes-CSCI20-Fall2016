// Created by author Jamie Hayes 
// Created on Date: 09/20/2016
#include <iostream>
#include <string>
using namespace std;

/* Description: Lab 7 Parameters- This program is intended to display a song of our personal choice, that uses 
    functions with parameters, and arguments. For my song I chose Overcome by TORA feat. Potato Potato. Despite
    tha bands silly name. The song is elegant and modern, with simple lyrics, which works well for this assignment. 
    Because of the repeating chorus line via, overcome. Tt's helpful when coding the chorus parameter. 
*/

// song title print setup one parameter
void printTitle (string title) {
    cout << "lyrics from: ";
    cout << title << endl;
    return;
}
    
 // chorus function, output the chorus with one parameter
void chorusOverC(string overcome) {
    cout << "I'm scared to be" << endl;
    cout << "Someone lost and free";
    cout << overcome << endl;
    cout << "Washing in and out of space" << endl;
    cout << "Every drift I loose my grace";
    cout << overcome << endl;
    cout << "But I need to know " << endl;
    cout << "That I can be alone and grow";
    cout << overcome << endl;
    
    return;
}

// verseone function void, output the verse with two parameters
void verse1 (string to , string on) {
    cout << "Longing ";
    cout << to;
    cout << " overcome" << endl;
    cout << "By holding "; 
    cout << on  << endl;
    
    return;
}
 
 // main function for title print
 int main () {
// call to print the name of song title 
    printTitle ("Overcome by Tora feat. potato potato"); // tile of song name
    cout << endl; 

// CALL for chorus and string overcome
    chorusOverC(" ,overcome");// print selected song lyrics for project from above void funtion chorus parameter
    cout << endl;
    
// call to print verseone with two parameters
    verse1 ("to", "on"); //pritn two fill words for void verse as shown above 
    cout << endl;
    
    return 0;
}