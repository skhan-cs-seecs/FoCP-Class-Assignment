// Name   : Jaweria Salman
// CMS ID : 589359
// Class  : BSCS16-D
// FoCP Class Assignment - implementation of 20 built-in functions

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <utility>   // swap
using namespace std;

int main() {
    cout << "Name: Jaweria Salman | CMS ID: 589359\n\n";

    // <cmath> : ceil, floor 
    double price = 7.3;
    cout << "1) ceil(" << price << ")  = " << ceil(price) << "\n";    // 8
    cout << "2) floor(" << price << ") = " << floor(price) << "\n";   // 7

    // <cctype> : isalpha, isdigit, isspace 
    string text = "Hello 2026 World";
    int letters = 0, digits = 0, spaces = 0;
    for (size_t i = 0; i < text.length(); i++) {
        if (isalpha(text[i]))      letters++;   // 3) isalpha
        else if (isdigit(text[i])) digits++;    // 4) isdigit
        else if (isspace(text[i])) spaces++;    // 5) isspace
    }
    cout << "3-5) \"" << text << "\" -> letters: " << letters
         << ", digits: " << digits << ", spaces: " << spaces << "\n";

    // <cstdlib>, <ctime> : rand, time
    srand(time(nullptr));                       // 13) time(nullptr) seeds rand
    int dice = rand() % 6 + 1;                  // 6) rand
    cout << "6) rand() dice roll (1-6): " << dice << "\n";
    cout << "13) time(nullptr) = " << time(nullptr) << " seconds since 1970\n";

    // sizeof
    cout << "11) sizeof(int) = " << sizeof(int) << " bytes\n";

    // to_string and string::empty
    string numText = to_string(2048);           // 10) to_string
    cout << "10) to_string(2048) = \"" << numText << "\"\n";
    string blank = "";
    cout << "12) blank.empty() = " << (blank.empty() ? "true" : "false")
         << ", numText.empty() = " << (numText.empty() ? "true" : "false") << "\n";

    // swap
    int a = 10, b = 20;
    swap(a, b);                                 // 14) swap
    cout << "14) after swap(a, b): a = " << a << ", b = " << b << "\n";

    // trigonometry : sin, cos, tan
    const double PI = 3.14159265358979;
    double angle = PI / 6;                      // 30 degrees
    cout << "15) sin(30 deg) = " << sin(angle) << "\n";
    cout << "16) cos(30 deg) = " << cos(angle) << "\n";
    cout << "17) tan(30 deg) = " << tan(angle) << "\n";

    // inverse trigonometry : asin, acos, atan 
    cout << "18) asin(0.5) = " << asin(0.5) * 180 / PI << " degrees\n";
    cout << "19) acos(0.5) = " << acos(0.5) * 180 / PI << " degrees\n";
    cout << "20) atan(1)   = " << atan(1.0) * 180 / PI << " degrees\n";

    // file handling : ofstream, ifstream, fstream 
    ofstream out("output.txt");                 // 7) ofstream - write to file
    out << "Name: Jaweria Salman\nCMS ID: 589359\nScore: 95\n";
    out.close();

    ifstream in("output.txt");                  // 8) ifstream - read from file
    string line;
    cout << "\n7-8) Reading output.txt with ifstream:\n";
    while (getline(in, line)) {
        cout << "    " << line << "\n";
    }
    in.close();

    fstream both("output.txt", ios::app | ios::in | ios::out);  // 9) fstream
    both << "Added using fstream\n";            // writing
    both.seekg(0);                              // go back to start
    int lineCount = 0;
    while (getline(both, line)) lineCount++;    // reading
    both.close();
    cout << "9) fstream appended a line; file now has " << lineCount << " lines\n";

    return 0;
}
