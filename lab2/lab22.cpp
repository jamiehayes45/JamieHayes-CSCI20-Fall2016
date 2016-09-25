//Created by Jamie Hayes 
// lab 2.2 function input write a function for each shape that computes the info given about that shape
#include <iostream>
#include <cmath>
using namespace std;

compute the volume of a rectangle box: // first equation assigned during lecture 
    V = l * w * h // given equation
    
void computeBoxVol (double lenght, double width, double height) {
    vloume = lenght * width * height;// equation to solve for volume
}

coumpute the volume of a cone: // second euation assigned in class
    V = 1/3 * 3.14 * r2 * h // given equation
    
void computeConeVol (double radius, double height) {
    volume = (1/3) * 3.14 * pow(radius, 2.0) * height; // void function to solve for volume
}

Compute the perimeter of a rectangle of a rectangular box: // third equation assigned in class
    P = 2 * ( l + w + h) 
    
void computePerimeterBox ( double lenght, double width, double height) {
    perimeter = 2 * ( lenght + width + height); // void function to solve for perimeter
}
  
Compute the surface area of a rectangle box:// final equation assined during the class period
    SA = 2 * (l * w + l * h + h * w)
    
void computeSurAreaBox (double lenght, double width, double height) {
    surfaceArea = 2 * (lenght * width + lenght * height + height * width); // void funtion to solve for surface area
}

// additonal setup example shown below
void myFunction( int length, int width, int height = 1) {
    

int main () {
    
    int length = 1;
    int width = 1;
    int height = 1;
    
    computeBox(length, width, height);
    computeCone(lenght, height);
    
}