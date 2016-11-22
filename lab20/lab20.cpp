/* Created by Jamie Hayes
Created on 11/16/16
Title: lab 20 - 5.1 Pointers 
Class Time: MW 9:00am-11:15am 
CSIC20-Programming and Algorithims I


Description: This program takes the following code with additional comments 
to demonstrate I understand what it is doing.
*/

#include <iostream> // io stream input output stream in the C++ standard library
#include <cstring> // c string library to allow modification later in the program
using namespace std; // allows for the use of standard cin and cout in the namespace below
int main() // program driver
{
char firststr[10]; // indicates there are 10 elements in the index-in this case 10 letters(char)
int firstname = 0; // assigns variable first name to be inserted by the program user
char *head = firststr; // delcares a pointer and assigns the datatype and variable name
char *tail = firststr; // declares a pointer using * and assigns data type and variable name

cout << "Please enter a 10 letter word or less" << endl; // output statement insructs user how to use the program
cin >> firststr; // allows for user input a string to the variable 
strlen(firststr); // strlen returns number of character in firststr up to, but not including first null charcacter 
firstname = strlen(firststr); // reasins variable fistname to the modification created by strlen

cout << "Your word is " << firststr << endl; // output statement shows the program user the word they entered
if (firstname<10) // if statement is for the situation of when the firstname variable is up to 10 characters long
{
while (*head != '\0') // while loop is desgined to stop the program once it reaches the null index represented by /0 and != menas dosen't equal to
{
cout << *head; // output statement outputs derefference away from the pointer and to the pointee instead
head++; // this initilizes the operator to manipulate head variable in mathmatical problem above 
}
}
else // else defualt branch in an if/else statement when if conditions are not met
{
cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl; // output display statement when the user has exceeded the approved number of chacters
}

cout << endl; // creates a new line
tail = &firststr[strlen(firststr) - 1]; // multiple pointees & refferences firststr as address, sterlen will count the variables and not the null of firststr snd minus removes the last null
if (firstname < 10) // if statement when condition is met to have under ten characters
{
while (*tail>0) // while loop uses pointer-derefference tail to be less than zero
{
cout << *tail; // outputs the deferrerence away from the pointee
tail--; // oporator symbol manipulates mathmatical problem above
}
}

cout << endl; // creates a new line
head = firststr; // reassigns the variable firststr to new variable via head
tail = &firststr[strlen(firststr) - 1]; // equaion moves the first letter to become the last letter and reasigns to the new variable tail
// also print memory address of pointer 
head++; // operator mainpulates head
tail--; // operator manipulates tail
if (*head == *tail) // if statement when the condition is met. assigns derefferenced haed to derefferenced tail variable
{
cout << "It is an palindrome!" << endl; // the first leter can be moved to the last location and still make a word
}
else // default else if the if-statement isn't met
{
cout << "It is not an palindrome" << endl; // defualt output statment that it dosen't create a legible word
}
return 0; // the program will return nothing -there for zero return
}
