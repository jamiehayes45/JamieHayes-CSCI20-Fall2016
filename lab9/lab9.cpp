// Created by Jamie Hayes
// Created on 9/27/16 
// Title: lab 9 functions and classes
// Class: april browne CSCI-20-Fall M-W 9:00-11:15am 
#include <iostream>
#include <cmath> 
using namespace std;

/* Description of program:Create a class that converts temperatures between 
*  Kelvin, Fahrenheit and Celsius.  It will always internally store the value in 
*  kelvin. This class will be run by the provided main.
*/


class TempratureConverter {                     // class name
    public:                                     // class type can be changed and accessed by user
    void SetTempFromKelvin(double kelvinTemp);  // mutator
    void SetTempFromCelcius(double celsiusTemp);
    void SetTempFromFahrenheit(double fahrentheitTemp);
    void PrintTemperatures() const;
    
    TempertureConverter();  // default constructor
    TemperatureConverter(double kelvinTemp); // overloading
    
    double GetTempFromKelvin() const; // accessor
    double GetTempAsCelsius() const;
    double GetTempAsFahrenheit() const;
    
    private: 
        double kelvin_;
    }
};

TeperatureConverter :: TemperatureConverter(double kelvinTemp) {// overloading
    kelvin_ = kelvinTemp;
}

TempratureConverter :: TempratureConverter () {              // default constructor
    kelvin_ = 0.0 ;
}

void TemperatureCOnverter :: SetTempFromCelcius(double celsiusTemp) {
    kelvin_ = celsiusTemp +273.15;                          // equation k = c + 273.15
}

void TempratureConverter :: SetTempFromFahrenheit(double fahrenheitTemp) {
    kelvin_ = (5.00*(fahrenheitTemp -32.00)/9.00) + 273.15; // equation k = (5*(f-32) /9) +273.15
}

void TempratureConverter :: SetTempFromKelvin (double kelvinTemp) {   
    kelvin_ - kelvinTemp
} 

double TempratureConverter :: GetTempFromKelvin () const {
    return kellvin_;
}

double TempertureConverter :: GetTempAsCelsius () const { // mutator
    return kelvin_ - 273.15;                             //equation  c= k - 273.15 return in order to get celsius
}

double TempratureConverter :: GetTempAsFahrenheit ()const { // mutatt
    return ((kelvin_* 9) /5 + 32);                        // equation ((celcius * 9) divided by 5 + 32)
}

// PrintTemperatures
void TempratureConverter::PrintTemperatures() const {
    cout << "kelvin value: " << GetTempFromKelvin();
    cout << endl;
    cout << " celsius value: " << GetTempAsCelsius();
    cout << endl;
    cout << "fahrenheit value: " << GetTempAsFahrenheit();
    cout << endl;
} 