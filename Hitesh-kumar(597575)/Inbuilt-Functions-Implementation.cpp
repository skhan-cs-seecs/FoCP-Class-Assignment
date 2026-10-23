/*
 * Name: Hitesh kumar
 * CMS ID: 597575
 * Course: Fundamentals of Computer Programming (FoCP)
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
    
    cout << fixed << setprecision(2);

    const double PI = 3.14159265358979;

    // 1. cos(): Returns the cosine of an angle given in radians.
    // A ramp makes a 60 degree angle with the ground, so the angle is converted to radians first.
    double rampAngleDegrees = 60.0;
    double rampAngleRadians = rampAngleDegrees * PI / 180.0;
    cout << "Cosine of " << rampAngleDegrees << " degrees: " << cos(rampAngleRadians) << endl;

    // 2. tan(): Returns the tangent of an angle given in radians.
    // Height of a tree = distance from the tree * tan(angle of elevation).
    double distanceFromTree = 20.0;
    double elevationAngle = 30.0 * PI / 180.0;
    cout << "Height of the tree: " << distanceFromTree * tan(elevationAngle) << " meters" << endl;

    // 3. exp(): Returns e raised to a given power.
    // Continuous compound interest formula: amount = principal * e^(rate * time).
    double principal = 1000.0;
    double interestRate = 0.05;
    double years = 3.0;
    cout << "Savings after 3 years: " << principal * exp(interestRate * years) << endl;

    // 4. log10(): Returns the base-10 logarithm of a number.
    // The number of digits in a number = floor(log10(number)) + 1.
    long long cityPopulation = 1234567;
    int totalDigits = static_cast<int>(floor(log10(static_cast<double>(cityPopulation)))) + 1;
    cout << "Population " << cityPopulation << " has " << totalDigits << " digits" << endl;

    // 5. cbrt(): Returns the cube root of a number.
    // Side length of a cube-shaped water tank when its volume is known.
    double tankVolume = 125.0;
    cout << "Side of a tank with volume 125 m^3: " << cbrt(tankVolume) << " meters" << endl;

    // 6. hypot(): Returns sqrt(x*x + y*y), the straight-line distance.
    // A student travels 6 km east and 8 km north from home to the university.
    double kmEast = 6.0;
    double kmNorth = 8.0;
    cout << "Straight-line distance to university: " << hypot(kmEast, kmNorth) << " km" << endl;

    // 7. trunc(): Removes the decimal part of a number (rounds toward zero).
    // A shopkeeper ignores the paisas and only charges the whole-rupee part of the bill.
    double billAmount = 249.99;
    cout << "Bill: " << billAmount << " | Charged: " << static_cast<int>(trunc(billAmount)) << endl;
    cout << endl;

    // 8. tolower(): Converts an uppercase letter to lowercase.
    // The user's answer is converted so both 'Y' and 'y' are accepted.
    char userAnswer = 'Y';
    char normalizedAnswer = static_cast<char>(tolower(userAnswer));
    if (normalizedAnswer == 'y')
    {
        cout << "Registration confirmed.\n";
    }
    else
    {
        cout << "Registration cancelled.\n";
    }

    // 9. isalpha(): Checks whether a character is a letter.
    // Validates that the entered grade is a letter and not a symbol or digit.
    char gradeInput = 'B';
    if (isalpha(gradeInput))
    {
        cout << "Grade '" << gradeInput << "' is a valid letter.\n";
    }
    else
    {
        cout << "Grade '" << gradeInput << "' is invalid.\n";
    }

    // 10. isdigit(): Checks whether a character is a digit (0-9).
    // Counts how many digits a password contains to check its strength.
    string password = "Pass2026word7";
    int digitCount = 0;
    for (char ch : password)
    {
        if (isdigit(static_cast<unsigned char>(ch)))
        {
            digitCount++;
        }
    }
    cout << "Password \"" << password << "\" contains " << digitCount << " digits.\n";

    // 11. isspace(): Checks whether a character is whitespace.
    // Number of words in a sentence = number of spaces + 1.
    string sentence = "C++ is fun to learn";
    int spaceCount = 0;
    for (char ch : sentence)
    {
        if (isspace(static_cast<unsigned char>(ch)))
        {
            spaceCount++;
        }
    }
    cout << "Words in \"" << sentence << "\": " << spaceCount + 1 << endl;
    cout << endl;

    // 12. find(): Locates the first occurrence of a value in a range.
    // Searches for a student's roll number in the attendance list.
    vector<int> attendanceList = {101, 105, 110, 115, 120};
    int rollToSearch = 110;
    auto foundPosition = find(attendanceList.begin(), attendanceList.end(), rollToSearch);
    if (foundPosition != attendanceList.end())
    {
        cout << "Roll number " << rollToSearch << " is present at position "
             << (foundPosition - attendanceList.begin()) << " in the attendance list.\n";
    }
    else
    {
        cout << "Roll number " << rollToSearch << " is absent.\n";
    }

    // 13. count(): Counts how many times a value appears in a range.
    // Counts how many students scored exactly 7 out of 10 in a quiz.
    vector<int> quizScores = {7, 9, 7, 10, 7, 8};
    int scoreToCount = 7;
    cout << "Students who scored " << scoreToCount << "/10: "
         << count(quizScores.begin(), quizScores.end(), scoreToCount) << endl;

    // 14. unique(): Moves consecutive duplicates to the end and returns the new end.
    // Some students submitted the assignment more than once, so duplicates are removed.
    vector<int> submissions = {101, 101, 102, 103, 103, 103, 104};
    auto newEnd = unique(submissions.begin(), submissions.end());
    submissions.erase(newEnd, submissions.end());
    cout << "Unique submissions: ";
    for (int roll : submissions)
    {
        cout << roll << " ";
    }
    cout << endl;

    // 15. accumulate(): Adds up all elements in a range starting from an initial value.
    // Finds the total and the average of a week's daily expenses.
    vector<int> dailyExpenses = {250, 400, 150, 300, 500};
    int totalExpense = accumulate(dailyExpenses.begin(), dailyExpenses.end(), 0);
    cout << "Total expense for 5 days: " << totalExpense << endl;
    cout << "Average daily expense: "
         << static_cast<double>(totalExpense) / dailyExpenses.size() << endl;

    // 16. next_permutation(): Rearranges elements into the next lexicographic order.
    // Lists every possible order in which three students can present.
    vector<string> presenters = {"Ali", "Hassan", "Sara"};
    cout << "Possible presentation orders:\n";
    int orderNumber = 1;
    do
    {
        cout << orderNumber++ << ". ";
        for (const string &name : presenters)
        {
            cout << name << " ";
        }
        cout << endl;
    } while (next_permutation(presenters.begin(), presenters.end()));
    cout << endl;

    // 17. atoi(): Converts a C-style string into an integer.
    // Quantity typed by a customer arrives as text, so it must be converted before calculating.
    const char *quantityText = "5";
    int itemPrice = 120;
    int quantity = atoi(quantityText);
    cout << quantity << " items x " << itemPrice << " = " << quantity * itemPrice << endl;
    cout << endl;

    cout << "OTP GENERATOR\n";

    // 18. srand(): Seeds the random number generator.
    // Using the current time as the seed gives a different OTP on every run.
    srand(static_cast<unsigned int>(time(0)));

    // 19. rand(): Generates a pseudorandom integer.
    // rand() % 9000 gives 0-8999, and adding 1000 makes it a 4-digit code (1000-9999).
    int otpCode = 1000 + (rand() % 9000);
    cout << "Your verification code is: " << otpCode << endl;

    cout << "============================================\n";
    cout << " Thank you for using the program!\n";
    cout << "============================================\n";

    // 20. exit(): Terminates the program immediately with a status code (0 means success).
    exit(0);
}
