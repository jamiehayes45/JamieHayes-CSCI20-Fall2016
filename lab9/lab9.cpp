// Created by Jamie Hayes
// Created on 9/27/16 : functions and classes
#include <iostream>
#include <string>
#include <cmath> 
using namespace std;

class TempratureConverter {             // class name
    public:                             // class type can be changed and accessed by user
    void SetTempFromKelvin() const;      // accessr
    void SetTempFromCelcius;
    void SetTempFromFahrenheit;
    TempertureConverter();             // default constructor
    
    double GetTempFromKelvin;
    double GetTempAsCelsius;
    double GetTempAsFahrenheit;
    
    private: 
        int kelvin_;
    }
};
TempratureConverter :: TempratureConverter () {     // default constructor
    kelvin_ = "0";
    return;
}

void TempratureConverter :: SetTempFromKelvin () {    // Accessor
    
} 

void TempratureConverter :: SetTempFromCelcius () {    //Accesor
    (k=c + 273.15) = Celsius_value;
    return;
}

void TempratureConverter :: SetTempFromFahrenheit (){   // Acessor
    k=(5 *(f-32)/9) + 273.15 = Fahrenheit_value;
    return;
}

double TempratureConverter :: GetTempFromKelvin () {    // mutator
    returns kelvin_value;
}

double TempertureConverter :: GetTempAsCelsius () {       // mutator
    k- 273.15;
    return CelsiusTemp;
}

double TempratureConverter :: GetTempAsFahrenheit () {    // mutatt
    ((c*9)/5 + 32)
    return FahrenheitTemp;
}

// PrintTemperatures
item1.Print();
item1.PrintTemperatures("kelvin_", 0);
item1.Print();

item2.Prit();
item2.PrintTemperatures("celius");
item2.Print();

item3.Print();
item3.PrintTemperatures("fahrenheit");
item3.Print();

return 0;
}