#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159265358979;

    cout << "=== Power and Root Functions ===" << endl;
    cout << "1.  sqrt(25)       = " << sqrt(25) << endl;        // square root
    cout << "2.  cbrt(27)       = " << cbrt(27) << endl;        // cube root
    cout << "3.  pow(2, 5)      = " << pow(2, 5) << endl;       // 2 to the power 5
    cout << "4.  hypot(3, 4)    = " << hypot(3, 4) << endl;     // sqrt(3*3 + 4*4)

    cout << "\n=== Rounding Functions ===" << endl;
    cout << "5.  ceil(4.2)      = " << ceil(4.2) << endl;       // round up
    cout << "6.  floor(4.8)     = " << floor(4.8) << endl;      // round down
    cout << "7.  round(4.5)     = " << round(4.5) << endl;      // round to nearest
    cout << "8.  trunc(-4.9)    = " << trunc(-4.9) << endl;     // drop decimal part

    cout << "\n=== Absolute, Remainder, Min and Max ===" << endl;
    cout << "9.  fabs(-7.5)     = " << fabs(-7.5) << endl;      // absolute value
    cout << "10. fmod(10, 3)    = " << fmod(10, 3) << endl;     // remainder of 10 / 3
    cout << "11. fmax(8, 15)    = " << fmax(8, 15) << endl;     // larger value
    cout << "12. fmin(8, 15)    = " << fmin(8, 15) << endl;     // smaller value

    cout << "\n=== Exponential and Logarithm Functions ===" << endl;
    cout << "13. exp(1)         = " << exp(1) << endl;          // e to the power 1
    cout << "14. log(10)        = " << log(10) << endl;         // natural log
    cout << "15. log10(1000)    = " << log10(1000) << endl;     // base-10 log
    cout << "16. log2(8)        = " << log2(8) << endl;         // base-2 log

    cout << "\n=== Trigonometric Functions (radians) ===" << endl;
    cout << "17. sin(PI / 2)    = " << sin(PI / 2) << endl;     // sin 90 degrees
    cout << "18. cos(0)         = " << cos(0) << endl;          // cos 0 degrees
    cout << "19. tan(PI / 4)    = " << tan(PI / 4) << endl;     // tan 45 degrees
    cout << "20. atan(1) * 4    = " << atan(1) * 4 << endl;     // inverse tan, gives PI

    return 0;
}