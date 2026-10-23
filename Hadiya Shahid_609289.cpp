//Name: Hadiya Shahid
//CMS ID: 609289
#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
   
    // Part 1: Character Checking & Changing (<cctype>)
    char myChar1 = '7';
    char myChar2 = 'A';
    char myChar3 = 'b';
    char myChar4 = ' ';
    char myChar5 = '!';

    // 1. isdigit() - Checks for numbers '0' to '9'
    if (isdigit(myChar1)) {
        cout << "'" << myChar1 << "' is a numeric digit." << endl;
    }

    // 2. isalpha() - Checks for letters (A-Z, a-z)
    if (isalpha(myChar2)) {
        cout << "'" << myChar2 << "' is an alphabet." << endl;
    }

    // 3. isalnum() - Checks for either a letter or a number
    if (isalnum(myChar1) && isalnum(myChar2)) {
        cout << "Both '" << myChar1 << "' and '" << myChar2 << "' are alphanumeric." << endl;
    }

    // 4. isspace() - Checks for spaces, tabs, or newlines
    if (isspace(myChar4)) {
        cout << "Found a whitespace character." << endl;
    }

    // 5. ispunct() - Checks for punctuation marks or symbols
    if (ispunct(myChar5)) {
        cout << "'" << myChar5 << "' is a punctuation mark." << endl;
    }

    // 6. islower() - Checks for lowercase letters
    if (islower(myChar3)) {
        cout << "'" << myChar3 << "' is lowercase." << endl;
    }

    // 7. isupper() - Checks for uppercase letters
    if (isupper(myChar2)) {
        cout << "'" << myChar2 << "' is uppercase." << endl;
    }
    cout << endl;

    // Part 2: Math Functions (<cmath>)
  
    int negativeNum = -15;
    double decimalNum = 5.7;
    double sideA = 3.0;
    double sideB = 4.0;

    // 8. abs() - Turns negative numbers positive
    cout << "Absolute value of " << negativeNum << " is: " << abs(negativeNum) << endl;

    // 9. ceil() - Rounds a decimal number UP
    cout << "Ceil of " << decimalNum << " is: " << ceil(decimalNum) << endl;

    // 10. floor() - Rounds a decimal number DOWN
    cout << "Floor of " << decimalNum << " is: " << floor(decimalNum) << endl;

    // 11. round() - Rounds a decimal number normally
    cout << "Rounding " << decimalNum << " gives: " << round(decimalNum) << endl;
    cout << "Rounding 5.4 gives: " << round(5.4) << endl;

    // 12. fmod() - Finds the remainder of decimal division
    cout << "Remainder of 5.7 divided by 2.0 is: " << fmod(decimalNum, 2.0) << endl;

    // 13. hypot() - Calculates the long side (hypotenuse) of a right triangle
    cout << "Hypotenuse of triangle with sides " << sideA << " and " << sideB << " is: " << hypot(sideA, sideB) << endl;
    cout << endl;

    // Part 3: Text and Number Conversion (<string>)

    int luckyNumber = 777;
    string intStr = "123";
    string doubleStr = "45.67";

    // 14. to_string() - Converts a regular number into a text string
    string convertedStr = to_string(luckyNumber);
    cout << "Number converted to text string: " << convertedStr << " (Length: " << convertedStr.length() << ")" << endl;

    // 15. stoi() - String to Integer
    int parsedInt = stoi(intStr);
    cout << "Text string '" << intStr << "' converted to int: " << parsedInt << " (Parsed + 10 = " << (parsedInt + 10) << ")" << endl;

    // 16. stod() - String to Double
    double parsedDouble = stod(doubleStr);
    cout << "Text string '" << doubleStr << "' converted to double: " << parsedDouble << " (Parsed + 0.33 = " << (parsedDouble + 0.33) << ")" << endl;
    cout << endl;

    // Part 4: System & Utility Functions (<algorithm>, <cstdlib>, <ctime>)

    int userHealth = 150;
    int minHealth = 0;
    int maxHealth = 100;

    // 17. clamp() - Forces a number to stay between limits
    // Since health is 150, clamp will force it down to the max limit (100)
    int validHealth = clamp(userHealth, minHealth, maxHealth);
    cout << "Original health: " << userHealth << " -> Clamped health: " << validHealth << endl;

    // 18. time() - Gets current clock time as a timestamp
    time_t secondsSince1970 = time(nullptr);
    cout << "Seconds elapsed since January 1, 1970: " << secondsSince1970 << endl;

    // 19. system() - Executes a terminal command 
    cout << "Executing a quick system echo command..." << endl;
    system("echo C++ Built-in Functions Demo Complete!");
    cout << endl;

    // 20. exit() - Instantly terminates the program
    cout << "Terminating the program early using exit(). This text will show, but nothing after exit() will run." << endl;
    exit(0);

    // This line will NEVER execute because of exit()
    cout << "This line is unreachable." << endl;

    return 0;
}
