// Name: Noor Ul Huda Amjad
// CMS ID: 596442

// Demonstration of 20 built-in functions in C++

#include <iostream>
#include <cmath>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    cout << "Name: YOUR NAME" << endl;
    cout << "CMS ID: YOUR CMS ID" << endl << endl;

    // ---------- <cmath> functions ----------
    // 1. cbrt() - cube root
    cout << "1. cbrt(27) = " << cbrt(27) << endl;

    // 2. ceil() - round upward
    cout << "2. ceil(4.2) = " << ceil(4.2) << endl;

    // 3. fabs() - absolute value of a decimal
    cout << "3. fabs(-7.5) = " << fabs(-7.5) << endl;

    // 4. fmod() - floating-point remainder
    cout << "4. fmod(10.5, 3) = " << fmod(10.5, 3) << endl;

    // 16. floor() - round downward
    cout << "16. floor(4.9) = " << floor(4.9) << endl;

    // ---------- <cctype> functions ----------
    char ch1 = 'a', ch2 = 'B', ch3 = '7', ch4 = 'F';

    // 5. islower() - checks if character is lowercase
    cout << "5. islower('a') = " << (islower(ch1) ? "true" : "false") << endl;

    // 6. isupper() - checks if character is uppercase
    cout << "6. isupper('B') = " << (isupper(ch2) ? "true" : "false") << endl;

    // 15. isdigit() - checks whether character is a digit
    cout << "15. isdigit('7') = " << (isdigit(ch3) ? "true" : "false") << endl;

    // 17. isalnum() - checks whether character is a letter or digit
    cout << "17. isalnum('7') = " << (isalnum(ch3) ? "true" : "false") << endl;

    // 18. isxdigit() - checks whether character is a hexadecimal digit
    cout << "18. isxdigit('F') = " << (isxdigit(ch4) ? "true" : "false") << endl;

    // ---------- <string> functions ----------
    string str = "Hello World";

    // 7. substr() - gives a specific part of string
    cout << "7. str.substr(0, 5) = " << str.substr(0, 5) << endl;

    // 8. append() - adds text at end of string
    string s1 = "Hello";
    s1.append(" there");
    cout << "8. After append: " << s1 << endl;

    // 9. at() - access character at given index
    cout << "9. str.at(4) = " << str.at(4) << endl;

    // 10. push_back() - adds one character at end of string
    string s2 = "Cod";
    s2.push_back('e');
    cout << "10. After push_back: " << s2 << endl;

    // 11. pop_back() - removes last character of non-empty string
    string s3 = "Coder";
    s3.pop_back();
    cout << "11. After pop_back: " << s3 << endl;

    // 12. front() - returns first character of non-empty string
    cout << "12. str.front() = " << str.front() << endl;

    // 13. back() - returns last character of non-empty string
    cout << "13. str.back() = " << str.back() << endl;

    // 14. clear() - removes all characters of string
    string s4 = "Remove me";
    s4.clear();
    cout << "14. After clear, length = " << s4.length() << endl;

    // 19. swap() - exchanges components of two strings
    string a = "First", b = "Second";
    a.swap(b);
    cout << "19. After swap: a = " << a << ", b = " << b << endl;

    // 20. find() - finds position of character or substring
    size_t pos = str.find("World");
    cout << "20. str.find(\"World\") = " << pos << endl;

    return 0;
}
