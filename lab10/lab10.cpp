// created by Jamie Hayes
// created on 10/3/16 3.2 Boolean and Logical Operators. lab 10
#include <iostream>
using namespace std;

 int main () {
    // equation 1
    int suzyAge = 25;
    int johnAge = 21;
    cout << (suzyAge < johnAge) << " John's age is not greater than Suzy's age.This equation is false" << endl;
    
    // equation 2
    int x = 7;
    int y = 7;
    cout << (x >= y) << " Since both variables are 7 the equation is true. x is greater than or equal to y."<<endl;
    
    // equation 3
    int a = 1;
    int b =9;
    cout << (a == b) << " This statement is false, since 1 dosen't equal nine." << endl;
    
    // equation 4
    int limit = 20;
    int count = 10;
    cout << ((limit*count)/2>0) << " This statement is true , since limit and cout make the equation 100 is greater than 2"<< endl;
    
    // equation 5
    int t = -4;
    int z = 0;
    cout << (t > 5 || z < 2); 
    cout << " This statement is false, because the two bars indicate or. Howerver, negative four is not greater than five." << endl;
    
    // equation 6 
    int variable = -5;
    cout << (!(variable>0)) << "This statement is true, because of !. ! indicates not, therefor anyother number is less than zero."<< endl;
    
    //equation 7
     a = 16;
    cout << (a/4<8&& a >=4) << " This statement is true, since && means and, which makes 8&&a the highest number, via 24." << endl;
    
    // equation 8
     x = -2;
     y = 5;
    cout << (x*y < 10 || y*z <10)<< " This statement is also true, since 10 is greater than negative twenty or ten is greater than zero. "<< endl;
    
    //equation 9
    int j = -2;
    int k = 5;
    int l = 4;
    cout << (!(j*l<10)|| y/x * 4 < y*2) << " This statement is also ture, which can be explained by negative two is less then ten, or negative eighty is less then twenty."<< endl;
}
