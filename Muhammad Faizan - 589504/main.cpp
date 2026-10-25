#include<iostream>
#include<string>
#include<cctype>
#include<cmath>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main(){
    
    // Function 1: ldexp - cmath - Multiplies A Floating Point Number(First Argument) By 2 Raised To An Exponent (Second Argument)
    cout << "Function 1 -- " << "ldexp(0.75, 8) = " << ldexp(0.75, 8) << endl; 

    // Function 2: isgraph - cctype - Checks Wether A Character Is Printable And Not A Blank Space
    cout << "Function 2 -- " << "isgraph('A') = " << isgraph('A') << endl; 

    // Function 3: ilogb - cmath -  Returns the integer exponent of the floating-point number's radix representation
    cout << "Function 3 -- " << "ilogb(32.0) = " << ilogb(32.0) << endl;

    // Function 4: scalbln - cmath -  Scales a floating-point number by an integral power of the radix
    cout << "Function 4 -- " << "scalbln('A') = " << scalbln(1.5, 3) << endl;

    // Function 5: tgamma - cmath -  Computes The Gamma Function
    cout << "Function 5 -- " << "tgamma(6.0) = " << tgamma(6.0) << endl;
   
    // Function 6: nearbyint - cmath -  Returns The Nearest Integer To The Flaoting Point Number
    cout << "Function 6 -- " << "nearbyint(24.37) = " << nearbyint(24.37) << endl;
   
    // Function 7: showbase - iomanip -  Displays numeric base prefixes where supported
    cout << "Function 7 -- " << "showbase << hex << 255 Prints  " << showbase << hex << 255 << endl;
   
    // Function 8: internal - iomanip - Places fill characters between a numeric sign or base prefix and the number
    cout << "Function 8 -- " << "internal << setfill('*') << setw(8) Prints  " << internal << setfill('*') << setw(8) << endl;
   
    // Function 9: iscntrl - cctype - Detects control characters such as newline and tab.
    cout << "Function 9 -- " << "iscntrl('B') " << iscntrl('B') << endl;

    // Function 10: hexfloat - iomanip - Prints floating-point values in hexadecimal notation
    cout << "Function 10 -- " << "hexfloat << 3.34" << hexfloat << 3.34 << endl;

    // Function 11: showpos - iomanip - Forces a plus sign to be displayed for nonnegative signed numeric output.
    cout << "Function 11 -- " << "showpos << 25 " << showpos << 25 << endl; 

    // Function 12: strtoul - cstdlib - Parses an unsigned integer in a chosen base.
    cout << "Function 12 -- " << "strtoul(\"1010\", nullptr, 2) = " << strtoul("1010", nullptr, 2) << endl; 

    // Function 13: stold - string -  Converts a string to a long double
    cout << "Function 13 -- " << "stold(34.45668799976) = " << stold("34.45668799976") << endl;

    // Function 14: abs - cmath -  Calculates absolute value of a function
    cout << "Function 14 -- " << "abs(-235) = " << abs(-235) << endl;

    // Function 15: to_string - string -  Converts a numeric value into a string
    cout << "Function 15 -- " << "to_string(125.3) = " << to_string(125.3) << endl;
   
    // Function 16: put_money - iomanip -  Formats a monetary value according to the active locale
    cout << "Function 16 -- " << "put_money(\"12345\") = " << put_money("12345") << endl;
   
    // Function 17: erfc - cmath - Computes Complementary Error Function
    cout << "Function 17 -- " << "erf(1.0)  " << erfc(3.0) << endl;

    // Function 18: erf - cmath - Computes Gaussian Error Function
    cout << "Function 18 -- " << "erf(1.0)  " << erf(1.0) << endl;
   
    // Function 19: fma - cmath - Computes x * y + z with a single final rounding
    cout << "Function 19 -- " << "fma(10, 12, 14) " << fma(10, 12, 14) << endl;

    // Function 20: signbit - cmath - Detects a negative sign, including on negative zero and NaN.
    cout << "Function 20 -- " << "signbit(-5)" << signbit(-5) << endl;


}

