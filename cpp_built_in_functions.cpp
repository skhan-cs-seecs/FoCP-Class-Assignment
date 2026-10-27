#include <iostream>
#include <cmath>
#include <cctype>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    cout << "--- 20 Built-in Functions in C++ ---" << endl << endl;

    // 1. sqrt() - square root of a number
    double n = 64.0;
    cout << "1. sqrt(64): " << sqrt(n) << endl;

    // 2. pow() - base raised to power
    cout << "2. pow(2, 5): " << pow(2, 5) << endl;

    // 3. abs() and fabs() - absolute value
    cout << "3. abs(-42): " << abs(-42) << ", fabs(-9.75): " << fabs(-9.75) << endl;

    // 4. ceil() - round up
    cout << "4. ceil(4.2): " << ceil(4.2) << endl;

    // 5. floor() - round down
    cout << "5. floor(4.8): " << floor(4.8) << endl;

    // 6. round() - round to nearest integer
    cout << "6. round(4.5): " << round(4.5) << ", round(4.4): " << round(4.4) << endl << endl;


    // 7. isalpha() - check if character is a letter
    char c1 = 'G';
    cout << "7. isalpha('G'): " << isalpha(c1) << endl;

    // 8. isdigit() - check if character is a digit
    char c2 = '7';
    cout << "8. isdigit('7'): " << isdigit(c2) << endl;

    // 9. toupper() - convert lowercase to uppercase
    char lower = 'b';
    cout << "9. toupper('b'): " << (char)toupper(lower) << endl;

    // 10. tolower() - convert uppercase to lowercase
    char upper = 'M';
    cout << "10. tolower('M'): " << (char)tolower(upper) << endl << endl;


    // 11. strlen() - get length of C-string
    char str[] = "Hello, C++";
    cout << "11. strlen(\"Hello, C++\"): " << strlen(str) << endl;

    // 12. strcpy() - copy one string into another
    char text[50];
    strcpy(text, "Standard ");
    cout << "12. After strcpy: " << text << endl;

    // 13. strcat() - join two strings together
    strcat(text, "Library");
    cout << "13. After strcat: " << text << endl;

    // 14. strcmp() - compare two strings
    char s1[] = "apple";
    char s2[] = "banana";
    cout << "14. strcmp(\"apple\", \"banana\"): " << strcmp(s1, s2) << endl;

    // 15. substr() - get part of a string
    string msg = "Programming in C++";
    cout << "15. substr(0, 11): " << msg.substr(0, 11) << endl << endl;


    // 16. max() - find the bigger number
    cout << "16. max(15, 28): " << max(15, 28) << endl;

    // 17. min() - find the smaller number
    cout << "17. min(15, 28): " << min(15, 28) << endl;

    // 18. swap() - swap values of two variables
    int x = 100, y = 200;
    swap(x, y);
    cout << "18. After swap: x = " << x << ", y = " << y << endl;

    // 19. sort() - sort an array/vector in ascending order
    vector<int> nums = {42, 15, 8, 99, 23, 4};
    sort(nums.begin(), nums.end());
    cout << "19. After sort: ";
    for (int i = 0; i < (int)nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    // 20. reverse() - reverse the elements
    reverse(nums.begin(), nums.end());
    cout << "20. After reverse: ";
    for (int i = 0; i < (int)nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}