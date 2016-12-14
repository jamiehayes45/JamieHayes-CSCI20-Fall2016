/* Created by Jamie Hayes
 * Created on 12/5/16
 * Title: Program 5 Final Project
 * Class: CSI-20 Programming and Algorithims I
 * Instructor: April Browne
 * Time: 9:00AM-11:15AM Monday Wednesday
 * Location: Media Center Room Main Campus
 
 * Description: (Proposal) The following program is intended to keep track of the 
 * amount of time spent on a commission and estimate it's final cost, based on the
 * time worked.I have always wanted to work as a graphic desginer, therefor this
 * program will help estimate the final cost amount depending on the amount of 
 * time a project takes. Commissions are complete under strict contracts that 
 * often require payment even if the final product is dinied by the client. This
 * means this program will also include a defalut cost.
 */
 #include <iostream>
 #include <string>
 #include <cmath>
 using namespace std;
 
// class DesignMenuOptions {   // Class name
    // public:
// }
 int main ()  {
     // frist part of program Array of desgin options
     cout << "Welcome to My_Design_Lab! Were we make custom desgins for any project or company!" << endl;
     cout << "here is a list of our most popular graphic design options: " << endl;
     // Array set up
     string DesginOptions[] = {"Brand/Company Logo" , "Photoshop" , "Vector Graphic" , "Caligraphy"};
     
     for (int i = 0; i < 4; ++i) {
         cout << DesginOptions[i] << endl;
     }
    // second part of the program - user chooses time variable and program will 
    // output fifteen minute variables
    // variable names of start and stop times 
    int startHour = 0;
    int endHour = 0; // Ending hour variable 
    int minutes = 0;
    
    // print minute interval between hour etimates of desgin types
    char Dt = 0; // desgin type variable will determine time-estimate cost
    
    cout <<"Choose the desgin type you would like to purchase by entering its represenative letter!" << endl;
    cout << "Your choices are: logo = l, photoshop = p, vector = v, caligraphy = c" << endl;
    cin  >> Dt;
    
    cout << "Please enter the start hour and end hour for the desgin type:" << endl;
    cout << "Logo: 1-8, photoshop: 1- 48, vector: 1-24, caligraphy: 1-32" << endl;
    
    cout << "enter start hour of corresponding design type:" << endl;
    cin  >> startHour;
    cout << endl;
    cout << "enter end hour for you corresponding design type:" << endl;
    cin  >> endHour;
    
    if(Dt == 'l') { // logo desgin fee diagram
    while (startHour < endHour) {
        if(minutes >= 60) {
            minutes = 0;
            startHour = startHour + 1;
        }
        if(startHour < endHour) {
        minutes = minutes + 60;
        cout << startHour << ":" << minutes << " $12.50 per hour" << endl; // print statement 
        cout << "Logo desgin final cost will be $100.00" << endl;
        } 
    }
    }
    else if(Dt == 'p') { // photoshop desgin fee diagram
    while (startHour < endHour) {
        if(minutes >= 60) {
            minutes = 0;
            startHour = startHour + 1; 
        }
        if(startHour < endHour) {
            minutes = minutes + 60;
        cout << startHour << ":" << minutes << " $12.50 per hour" << endl; // print statement
        cout << "Photoshop desgin final will be $600.00" << endl;
        } 
    }
    }
    if(Dt == 'v') { // vector charge diagram
    while (startHour < endHour) {
        if(minutes >= 60) {
            minutes = 0;
            startHour = startHour + 1;
        }
        if(startHour < endHour) {
        minutes = minutes + 60;
        cout << startHour << ":" << minutes << " $12.50 per hour" << endl; // print statement 
        cout << "vector desgin final cost will be $300.00" << endl;
        } 
    }
    }
    if(Dt == 'c') { // caligraphy desgin charge diagram
    while (startHour < endHour) {
        if(minutes >= 60) {
            minutes = 0;
            startHour = startHour + 1;
        }
        if(startHour < endHour) {
        minutes = minutes + 60;
        cout << startHour << ":" << minutes << " $12.50 per hour" << endl; // print statement 
        cout << "Caligraphy desgin final cost will be $400.00" << endl;
        } 
    }
    }
    // in case of rejectio by commissiioner 
    // terms and conditions will apply under contract 
    cout << "Under contract if a desgin is commissioned,";
    cout << "but rejected by commissioner for any reason there" << endl;
    cout << "will be a cover fee of $100 for a logo desgin.";
    cout << "And anyy commission higher than $100+ will pay a" << endl;
    cout << "cover fee of 65% the original cost." << endl;
    
     return 0;
 }
    