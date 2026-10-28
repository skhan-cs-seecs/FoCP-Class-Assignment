#include <iostream>
#include <cmath>
#include <cctype>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    int a = -25;
    double x = 4.7, y = 4.2;
    char ch1 = 'a', ch2 = '9', ch3 = 'Z';
    char str1[20] = "nust";
    char str2[20] = "seecs";

    cout << "sqrt: " << sqrt(81) << endl;
    cout << "pow: " << pow(2, 4) << endl;
    cout << "abs: " << abs(a) << endl;
    cout << "ceil: " << ceil(y) << endl;
    cout << "floor: " << floor(x) << endl;
    cout << "round: " << round(x) << endl;
    cout << "cbrt: " << cbrt(27) << endl;
    cout << "fmax: " << fmax(10.5, 3.2) << endl;
    cout << "fmin: " << fmin(10.5, 3.2) << endl;
    cout << "sin: " << sin(0) << endl;
    cout << "cos: " << cos(0) << endl;

    cout << "isdigit: " << isdigit(ch2) << endl;
    cout << "isalpha: " << isalpha(ch1) << endl;
    cout << "isalnum: " << isalnum(ch2) << endl;
    cout << "isupper: " << isupper(ch3) << endl;
    cout << "islower: " << islower(ch1) << endl;
    cout << "toupper: " << (char)toupper(ch1) << endl;
    cout << "tolower: " << (char)tolower(ch3) << endl;

    cout << "strlen: " << strlen(str1) << endl;
    cout << "strcmp: " << strcmp(str1, str2) << endl;

    return 0;
}