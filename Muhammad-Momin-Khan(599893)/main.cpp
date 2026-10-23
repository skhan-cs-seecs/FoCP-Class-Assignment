/*
 * Name: Muhammad Momin Khan
 * CMS ID: 599893
 * Course: Fundamentals of Computer Programming (FoCP)
 * Assignment: 20 C++ Built-In Functions
 */

#include <iostream>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <string>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main()
{
    cout << "====================================================\n";
    cout << "Student Name : Muhammad Momin Khan\n";
    cout << "CMS ID       : 599893\n";
    cout << "Course       : Fundamentals of Computer Programming\n";
    cout << "====================================================\n\n";

    // 1. pow(): Calculates a number raised to a power.
    double base = 3.0;
    double exponent = 4.0;
    cout << "3 raised to the power of 4: " << pow(base, exponent) << endl;

    // 2. sqrt(): Calculates the square root.
    double distance = 81.0;
    cout << "Square root of 81: " << sqrt(distance) << endl;

    // 3. ceil(): Rounds a number upward.
    double productPrice = 19.45;
    cout << "Price: " << productPrice << endl;
    cout << "Price rounded upward: " << ceil(productPrice) << endl;

    // 4. floor(): Rounds a number downward.
    cout << "Price rounded downward: " << floor(productPrice) << endl;

    // 5. abs(): Finds the absolute value.
    int temperatureChange = -18;
    cout << "Temperature: " << temperatureChange << endl;
    cout << "Absolute temperature change: " << abs(temperatureChange) << endl;

    // 6. gcd(): Finds the greatest common divisor.
    cout << "GCD of 36 and 60: " << gcd(36, 60) << endl;

    // 7. midpoint(): Finds the midpoint of two values.
    cout << "Midpoint between 100 and 200: " << midpoint(100, 200) << endl;

    // 8. adjacent_difference(): Finds differences between consecutive study-hour values.
    // Study hours recorded over five days.
    vector<int> studyHours = {2, 4, 3, 5, 6};
    cout << "Study hours from Monday to Friday: ";
    for (int hours : studyHours)
    {
        cout << hours << " ";
    }
    cout << endl;
    vector<int> dailyChanges(studyHours.size());
    adjacent_difference(studyHours.begin(), studyHours.end(), dailyChanges.begin());
    cout << "Study-hour differences: ";
    for (int change : dailyChanges)
    {
        cout << change << " ";
    }
    cout << endl;

    vector<int> studentMarks = {78, 92, 45, 63, 45, 88};
    cout << "Original marks: ";
    for (int mark : studentMarks)
    {
        cout << mark << " ";
    }
    cout << endl;

    // 9. sort(): Arranges marks in ascending order.
    sort(studentMarks.begin(), studentMarks.end());
    cout << "Marks in ascending order: ";
    for (int mark : studentMarks)
    {
        cout << mark << " ";
    }
    cout << endl;

    // 10. reverse(): Reverses the order of marks.
    reverse(studentMarks.begin(), studentMarks.end());
    cout << "Marks in reverse order: ";
    for (int mark : studentMarks)
    {
        cout << mark << " ";
    }
    cout << endl;

    // Sort again because binary_search requires the collection to be sorted.
    sort(studentMarks.begin(), studentMarks.end());

    // 11. binary_search(): Checks whether a mark exists.
    int targetMark = 63;

    if (binary_search(studentMarks.begin(), studentMarks.end(), targetMark))
    {
        cout << "Mark " << targetMark << " exists in the list.\n";
    }
    else
    {
        cout << "Mark " << targetMark << " does not exist in the list.\n";
    }

    // 12. replace(): Replaces every occurrence of 45 with 50.
    replace(studentMarks.begin(), studentMarks.end(), 45, 50);
    cout << "Marks after replacing 45 with 50: ";
    for (int mark : studentMarks)
    {
        cout << mark << " ";
    }
    cout << endl;

    // 13. find(): Locates the first occurrence of a mark.
    int markToFind = 88;
    auto position = find(studentMarks.begin(), studentMarks.end(), markToFind);
    if (position != studentMarks.end())
    {
        cout << "Mark " << markToFind << " found at index: " << (position - studentMarks.begin()) << endl;
    }
    else
    {
        cout << "Mark " << markToFind << " was not found.\n";
    }
    cout << endl;

    // 14. stod(): Converts a numeric string into a double.
    string temperatureInput = "36.5";
    double bodyTemperature = stod(temperatureInput);
    cout << "Text entered: " << temperatureInput << endl;
    cout << "Converted numeric value: " << bodyTemperature << endl;

    // 15. tolower(): Converts an uppercase letter to lowercase.
    char uppercaseLetter = 'M';
    cout << "Lowercase of M: " << static_cast<char>(tolower(uppercaseLetter)) << endl;

    // 16. toupper(): Converts a lowercase letter to uppercase.
    char lowercaseLetter = 's';
    cout << "Uppercase of s: " << static_cast<char>(toupper(lowercaseLetter)) << endl;

    // 17. isdigit(): Checks whether a character is a digit.
    char enteredCharacter = '7';
    if (isdigit(enteredCharacter))
    {
        cout << "'" << enteredCharacter << "' is a digit.\n";
    }
    else
    {
        cout << "'" << enteredCharacter << "' is not a digit.\n";
    }
    cout << endl;

    // 18. setprecision(): Controls decimal-place formatting for output streams.
    double assignmentPercentage = 89.1234567;
    cout << "Assignment percentage: " << fixed << setprecision(2) << assignmentPercentage << "%\n"
         << endl;

    cout << "DICE GAME\n";

    // 19. srand(): Seeds the random number generator.
    srand(static_cast<unsigned int>(time(0)));

    // 20. rand(): Generates a pseudorandom integer.
    int diceRoll = (rand() % 6) + 1;
    cout << "Rolling the dice...\n";
    cout << "You rolled: " << diceRoll << endl;
    if (diceRoll == 6)
    {
        cout << "Excellent! You rolled the highest number!\n";
    }
    else
    {
        cout << "Good luck on your next roll!\n";
    }

    cout << "============================================\n";
    cout << " Thank you for using the program!\n";
    cout << "============================================\n";

    return 0;
}