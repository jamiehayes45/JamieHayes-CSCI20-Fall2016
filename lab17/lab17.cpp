// Created ny Jamie Hayes
//Created on 11/2/16
// Title lab 17 4.3: C Strings
#include <iostream>
#include <cstring>
using namespace std;

/* Description: This program is deagined to create user names for a new 
website you have created. It should accept a first name of up to 10 
characters and a last name of up to 20 characters.It should tell the user 
if the name is larger than the max size. It should also determine if the 
names are the same and output a warning. After checking these things, it 
should create three different user name options
*/ 

int main () {
    char firstName[10]; // array limit is 10 charaters
    char lastName[20];  // array limit is 20 charaters
    
    char userName1[35];
    char userName2[35];
    char userName3[35];
    
    cout << "Congradulations you have just created a new website!" << endl;
    
    cout << "Please choose a new user name for your website!" << endl;
    
    cout << "Get started by entering your first name: " << endl;
    cin >> firstName;
    
    // this loop checks user input size for the first name 
     while(strlen(firstName) > 10) {
         cout << "The number of charcter exceeds 10!" << endl;
         cout << "Please re-enter another name under 10 characters: " << endl;
         cin >> firstName; // fixed first name
     }
    
    cout << "Next enter your last name: " << endl;
    cin >> lastName;
    
    // if statement checks if the last name is within 2o charcters
    while(strlen(lastName) > 20) {
        cout << "Too large of a last name!" << endl;
        cout <<"Re-enter another name under 20 characters: " << endl;
        cin >> lastName; // fixed last name
        
    // loop makes sure the names are different and warns to fix it
    if (firstName != lastName) {
        cout << "Warning!"<< endl;
        cout << "Please re-enter different names!" << endl;
    }
}
        cout << "Here are the names you entered. Please check if they are correct:"<< endl;
        cout << firstName << " " << lastName << endl;
    
    //set up three usernames using string copy
    strcpy(userName1, firstName);
    strcpy(userName2, firstName);
    strcpy(userName3, lastName);
    
    //combines names using string catch
    strcat(userName1, lastName);
    strcat(userName2, lastName);
    strcat(userName3, firstName);
    
    cout << "List of three user name options: " << endl;
    // prints user names
    cout << userName1 << endl; // example: apbrowne  
    cout << userName2 << endl; // example: aprilbrowne
    cout << userName3 << endl; // example: abrowne
    
return 0;
}