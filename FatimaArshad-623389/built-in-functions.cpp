// FOCP Assignment : 20 built-in functions
// Name            : Fatima Arshad
// CMS ID          : 623389
// Class           : BSCS-16-D

#include <iostream>
#include <numeric>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    cout << "\t\tBuilt-in Functions in C++" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "\t\t  Mathematical Functions" << endl;
    // 1. gcd(a,b): computes the greatest common divisor of a and b
    cout << "1. gcd(12,18) = " << gcd(12, 18) << endl;
    // 2. lcm(a,b): computes the least common multiple of a and b
    cout << "2. lcm(12,18) = " << lcm(12, 18) << endl;
    // 3. cbrt(a): computes the cube root of a
    cout << "3. cbrt(27) = " << cbrt(27) << endl;
    // 4. ceil(a): computes the smallest integer greater than or equal to a
    cout << "4. ceil(3.2) = " << ceil(3.2) << endl;
    // 5. floor(a): computes the largest integer less than or equal to a
    cout << "5. floor(3.8) = " << floor(3.8) << endl;
    // 6. trunc(a): computes the integer part of a
    cout << "6. trunc(3.8) = " << trunc(3.8) << endl;
    // 7. hypot(a,b): computes the length of the hypotenuse of a right triangle with sides a and b
    cout << "7. hypot(3,4) = " << hypot(3, 4) << endl;
    // 8. modf(a, &intpart): splits a into integer and fractional parts
    double intpart;
    cout << "8. modf(3.8, &intpart) = " << modf(3.8, &intpart) << endl;
    // 9. fmod(a,b): computes the floating-point remainder of a divided by b
    cout << "9. fmod(3.8, 2.0) = " << fmod(3.8, 2.0) << endl;
    // 10. isinf(a): checks if a is infinite
    cout << "10. isinf(1.0/0.0) = " << isinf(1.0 / 0.0) << endl;
    // 11. isnan(a): checks if a is not a number
    cout << "11. isnan(0.0/0.0) = " << isnan(0.0 / 0.0) << endl;
    // 12. isfinite(a): checks if a is finite
    cout << "12. isfinite(1.0/0.0) = " << isfinite(1.0 / 0.0) << endl;
    // 13. sin(a): computes the sine of a
    cout << "13. sin(3.14) = " << sin(3.14) << endl;
    // 14. cos(a): computes the cosine of a
    cout << "14. cos(3.14) = " << cos(3.14) << endl;
    // 15. tan(a): computes the tangent of a
    cout << "15. tan(3.14) = " << tan(3.14) << endl;
    
    cout << "----------------------------------------------------------" << endl;   
    cout << "\t\t   String Functions" << endl;
    // 16. empty(): checks if a string is empty
    string str1 = "";
    cout << "16. empty() = " << str1.empty() << endl;
    // 17. substr(pos, len): returns a substring of a string starting at position pos and of length len
    string str2 = "Hello, World!";
    cout << "17. substr(7, 5) = " << str2.substr(7, 5) << endl;
    // 18. push_back(c): adds a character c to the end of a string
    string str3 = "Hello";
    str3.push_back('!');
    cout << "18. push_back('!') = " << str3 << endl;
    // 19. pop_back(): removes the last character from a string
    str3.pop_back();
    cout << "19. pop_back() = " << str3 << endl;
    // 20. find(str): finds the first occurrence of a substring str in a string
    cout << "20. find('World') = " << str2.find("World") << endl;

    return 0;
}