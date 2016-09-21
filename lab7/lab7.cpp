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

// song title print setup parameter
void printTitle (string title) {
    cout << "lyrics from: ";
    cout << title << endl;
    
    return;
}

// chorus function, output the chorus with one parameter
void chorus (string overcome) {
    cout << "I'm scared to be" << endl;
    cout << "Someone lost and free" << overcome << endl;
    cout << "Washing in and out of space" << endl;
    cout << "Every drift I loose my grace" << overcome << endl;
    cout << "But I need to know " << endl;
    cout << "That I can be alone and grow" << overcome << endl;
    
    return;
}

//verse1 function to output. The first verse includes two parameters
void verse1 (string word1 , string word2) {
    cout << " " << word1 << " " << word2 << endl;
    cout << word2 << " " << word2 << endl; 
    
    return;
}
 
 // main function for title print
 int main () {
    printTitle ("Overcome by Tora feat. potato potato"); // tile of song name
    
    return 0;


// CALL for chorus and string overcome
    int chorus;
    string overcome;
    
    overcome = "overcome";
    chorus (string overcome);
    cout << overcome;
    
    return 0;
    
// call the verse i to print
    verse1(string word1 , string word2);
    cout << endl;
    

 }
     