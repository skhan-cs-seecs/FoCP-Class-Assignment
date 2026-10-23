#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <cctype>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // cos(): returns the cosine of an angle given in radians
    cout << cos(0) << endl;

    // tan(): returns the tangent of an angle given in radians
    cout << tan(0.5) << endl;

    // exp(): returns e raised to the given power
    cout << exp(2) << endl;

    // log10(): returns the base-10 logarithm of a number
    cout << log10(1000) << endl;

    // cbrt(): returns the cube root of a number
    cout << cbrt(27) << endl;

    // hypot(): returns the square root of (x*x + y*y), i.e. the hypotenuse
    cout << hypot(3, 4) << endl;

    // trunc(): removes the decimal part, rounding toward zero
    cout << trunc(7.89) << endl;

    // tolower(): converts an uppercase character to lowercase
    cout << (char)tolower('A') << endl;

    // isalpha(): returns non-zero if the character is a letter
    cout << isalpha('a') << endl;

    // isdigit(): returns non-zero if the character is a digit (0-9)
    cout << isdigit('5') << endl;

    // isspace(): returns non-zero if the character is whitespace
    cout << isspace(' ') << endl;

    // srand(): seeds the random number generator (using current time here)
    srand(time(0));

    // rand(): generates a pseudo-random integer; % 100 limits it to 0-99
    cout << rand() % 100 << endl;

    // atoi(): converts a C-style string to an integer
    cout << atoi("1234") + 1 << endl;

    vector<int> v = {1, 1, 2, 3, 3, 3, 4};

    // find(): returns an iterator to the first occurrence of a value in a range
    auto it = find(v.begin(), v.end(), 3);
    if (it != v.end()) cout << "Found at index " << it - v.begin() << endl;

    // count(): counts how many times a value appears in a range
    cout << count(v.begin(), v.end(), 3) << endl;

    // unique(): moves consecutive duplicates to the end and returns the new end;
    // erase() then removes those leftover elements
    auto last = unique(v.begin(), v.end());
    v.erase(last, v.end());
    for (int x : v) cout << x << " ";
    cout << endl;

    // accumulate(): adds up all elements in a range, starting from an initial value
    cout << accumulate(v.begin(), v.end(), 0) << endl;

    vector<int> p = {1, 2, 3};

    // next_permutation(): rearranges elements into the next lexicographic order;
    // returns false when no more permutations remain
    do {
        for (int x : p) cout << x << " ";
        cout << endl;
    } while (next_permutation(p.begin(), p.end()));

    // exit(): terminates the program immediately with the given status code
    exit(0);
}