/* Let a + ib be a complex number. The conjugate of a + ib is a – ib, and the absolute value of a + ib is sqrt(a^(2)+ b^(2)).
Extend the definition of the class completType given below by overloading the operators
~ and ! as member functions so that ~ returns the conjugate of the complex number and ! returns the absolute value. 
Also write the definition of these operator functions.
*/

#include <iostream>
#include "complexType.h" 

using namespace std;

int main()
{
    complexType num1(23, 34);                       //Line 1
    complexType num2;                               //Line 2
    complexType num3;                               //Line 3

    cout << "Line 4: Num1 = " << num1 << endl;      //Line 4
    cout << "Line 5: Num2 = " << num2 << endl;      //Line 5

    cout << "Line 6: Enter the complex number "
        << "in the form (a, b) ";                  //Line 6
    cin >> num2;                                    //Line 7
    cout << endl;                                   //Line 8

    cout << "Line 9: New value of num2 = "
        << num2 << endl;                           //Line 9

    num3 = num1 + num2;	                            //Line 10

    cout << "Line 11: Num3 = " << num3 << endl;     //Line 11

    cout << "Line 12: " << num1 << " + " << num2
        << " = " << num1 + num2 << endl;           //Line 12

    cout << "Line 13: " << num1 << " * " << num2
        << " = " << num1 * num2 << endl;           //Line 13
    
    cout << "Conjugate of num1: " << ~num1 << endl;
 
    cout << "Absolute value of num1: " << !num1 << endl;

    return 0;
}
