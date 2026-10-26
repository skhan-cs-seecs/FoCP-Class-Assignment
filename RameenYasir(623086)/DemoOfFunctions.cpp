// Name   : Rameen Yasir
// CMS ID : 623086
// Class  : BSCS(D)
// FoCP Class Assignment 2: Uncommon <cmath>, <cctype> and <cstdlib> functions

//Demonstrating 20 built-in functions in C++ library <cmath>, <cctype> and <cstdlib>

#include <iostream>
#include <cmath>
#include <cctype>
#include <cstdlib>
using namespace std;

int main() {
    cout << boolalpha;
    cout << "Name: Rameen Yasir | CMS ID: 623086\n\n";

    // <cmath>
    cout << "1) atan2(1, 1)       = " << atan2(1.0, 1.0) << "\n";       // 0.785398 (pi/4)
    cout << "2) cosh(0)           = " << cosh(0.0) << "\n";             // 1
    cout << "3) log2(32)          = " << log2(32.0) << "\n";            // 5
    cout << "4) exp2(3)           = " << exp2(3.0) << "\n";             // 8
    cout << "5) copysign(5, -1)   = " << copysign(5.0, -1.0) << "\n";   // -5
    cout << "6) fdim(10, 4)       = " << fdim(10.0, 4.0) << "\n";       // 6
    cout << "7) fmax(3.5, 9.2)    = " << fmax(3.5, 9.2) << "\n";        // 9.2
    cout << "8) fmin(3.5, 9.2)    = " << fmin(3.5, 9.2) << "\n";        // 3.5
    cout << "9) fma(2, 3, 4)      = " << fma(2.0, 3.0, 4.0) << "\n";    // 10 (2*3+4)
    cout << "10) remainder(10, 4) = " << remainder(10.0, 4.0) << "\n";  // 2
    cout << "11) lround(7.5)      = " << lround(7.5) << "\n";           // 8
    cout << "12) tgamma(5)        = " << tgamma(5.0) << "\n";           // 24 (4!)
    cout << "13) signbit(-3.2)    = " << (signbit(-3.2) != 0) << "\n";  // true
    cout << "14) isnan(sqrt(-1))  = " << (isnan(sqrt(-1.0)) != 0) << "\n\n"; // true

    // <cctype>
    cout << "15) isxdigit('F')    = " << (isxdigit('F') != 0) << "\n";  // true (hex digit)
    cout << "16) iscntrl('\\n')    = " << (iscntrl('\n') != 0) << "\n"; // true
    cout << "17) isprint('A')     = " << (isprint('A') != 0) << "\n";   // true
    cout << "18) isgraph(' ')     = " << (isgraph(' ') != 0) << "\n";   // false
    cout << "19) isblank('\\t')    = " << (isblank('\t') != 0) << "\n\n"; // true

    // <cstdlib>
    div_t result = div(17, 5);
    cout << "20) div(17, 5)  -> quotient = " << result.quot
        << ", remainder = " << result.rem << "\n";                      // 3 and 2

    return 0;
}

