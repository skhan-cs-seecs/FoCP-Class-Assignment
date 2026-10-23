// Muhammad Abdullah - C++ Standard Library Functions Demonstration
// CMS ID: 586264
// This program demonstrates the use of various C++ standard library functions from different headers.
// It includes functions from <cmath>, <numeric>, <algorithm>, <string>, <cctype>, <iomanip>, and <cstdlib>.

#include <iostream>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <string>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <ctime>

using namespace std;

int main() {
    cout << "=== C++ Standard Library Functions Demonstration ===\n\n";

    // 1. pow (<cmath>) - Calculates a number raised to a power
    double powerResult = pow(2.0, 3.0);
    cout << "1. pow(2.0, 3.0) = " << powerResult << "\n";

    // 2. sqrt (<cmath>) - Calculates the square root of a number
    double sqrtResult = sqrt(25.0);
    cout << "2. sqrt(25.0) = " << sqrtResult << "\n";

    // 3. ceil (<cmath>) - Rounds a decimal number up
    double ceilResult = ceil(4.2);
    cout << "3. ceil(4.2) = " << ceilResult << "\n";

    // 4. floor (<cmath>) - Rounds a decimal number down
    double floorResult = floor(4.8);
    cout << "4. floor(4.8) = " << floorResult << "\n";

    // 5. abs (<cmath>) - Finds the absolute (positive) value of a number
    int absResult = abs(-15);
    cout << "5. abs(-15) = " << absResult << "\n";

    // 6. gcd (<numeric>) - Finds the greatest common divisor between two numbers
    int gcdResult = gcd(24, 36);
    cout << "6. gcd(24, 36) = " << gcdResult << "\n";

    // 7. midpoint (<numeric>) - Safely calculates the midpoint between two values
    int midResult = midpoint(10, 20);
    cout << "7. midpoint(10, 20) = " << midResult << "\n";

    // Vector setup for algorithm demonstrations
    vector<int> nums = {10, 5, 20, 15, 25};

    // 8. adjacent_difference (<numeric>) - Finds the difference between consecutive elements
    vector<int> diffs(nums.size());
    adjacent_difference(nums.begin(), nums.end(), diffs.begin());
    cout << "8. adjacent_difference of {10, 5, 20, 15, 25}: ";
    for (int d : diffs) cout << d << " ";
    cout << "\n";

    // 9. sort (<algorithm>) - Rearranges elements in ascending order
    sort(nums.begin(), nums.end());
    cout << "9. sorted vector: ";
    for (int n : nums) cout << n << " ";
    cout << "\n";

    // 10. reverse (<algorithm>) - Flips the order of elements
    reverse(nums.begin(), nums.end());
    cout << "10. reversed vector: ";
    for (int n : nums) cout << n << " ";
    cout << "\n";

    // 11. binary_search (<algorithm>) - Efficiently checks if an item exists in a sorted list
    sort(nums.begin(), nums.end()); // Must be sorted for binary search
    bool foundVal = binary_search(nums.begin(), nums.end(), 15);
    cout << "11. binary_search for 15: " << (foundVal ? "Found" : "Not Found") << "\n";

    // 12. replace (<algorithm>) - Swaps out matching values in a container
    replace(nums.begin(), nums.end(), 10, 99);
    cout << "12. replace 10 with 99: ";
    for (int n : nums) cout << n << " ";
    cout << "\n";

    // 13. find (<algorithm>) - Locates the first match for a value in a collection
    auto it = find(nums.begin(), nums.end(), 20);
    cout << "13. find 20: " << (it != nums.end() ? "Found" : "Not Found") << "\n";

    // 14. stod (<string>) - Converts text numbers into actual double values
    string textNum = "123.456";
    double convertedDouble = stod(textNum);
    cout << "14. stod(\"123.456\") + 1.0 = " << convertedDouble + 1.0 << "\n";

    // 15. tolower (<cctype>) - Converts uppercase letters to lowercase
    char lowerChar = tolower('A');
    cout << "15. tolower('A') = " << lowerChar << "\n";

    // 16. toupper (<cctype>) - Converts lowercase letters to uppercase
    char upperChar = toupper('z');
    cout << "16. toupper('z') = " << upperChar << "\n";

    // 17. isdigit (<cctype>) - Checks whether a character is a digit (0-9)
    char testChar = '7';
    cout << "17. isdigit('7') = " << (isdigit(testChar) ? "True" : "False") << "\n";

    // 18. setprecision (<iomanip>) - Controls how many decimal places print out
    double pi = 3.1415926535;
    cout << "18. setprecision(3) on 3.1415926535 = " << fixed << setprecision(3) << pi << "\n";

    // 19 & 20. srand and rand (<cstdlib>) - Random number generation
    srand(static_cast<unsigned int>(time(0))); // Seed
    int randomNum = (rand() % 100) + 1;        // Random number between 1 and 100
    cout << "19 & 20. Random number (rand/srand): " << randomNum << "\n";

    return 0;
}