//Name: Muhammad Abdullah
//CMS ID: 600526
//Course: Fundamentals of Computer Programming (FoCP)


#include <iostream>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <string>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    cout << fixed << setprecision(4);

    // 1. expm1(): Returns e^x - 1, accurate even when x is very small.
    // Fractional growth of a bacteria culture after one hour with a small continuous growth rate.
    double growthRate = 0.02;
    cout << "Bacteria growth factor: " << expm1(growthRate) << endl;

    // 2. log1p(): Returns ln(1 + x), accurate even when x is very small.
    // Continuous (log) return of a share that gained 0.5% in a day.
    double dailyGain = 0.005;
    cout << "Continuous daily return: " << log1p(dailyGain) << endl;

    // 3. copysign(): Returns the magnitude of the first value with the sign of the second.
    // Shows an amount of Rs. 500 as negative when the shop made a loss.
    double amount = 500.0;
    double profitOrLoss = -120.0;
    cout << "Signed amount: " << copysign(amount, profitOrLoss) << endl;

    // 4. fmod(): Returns the floating-point remainder of a division.
    // Finds the time of day after 100.5 hours have passed from midnight.
    double hoursPassed = 100.5;
    cout << "Clock time after 100.5 hours: " << fmod(hoursPassed, 24.0) << " hours" << endl;

    // 5. scalbn(): Multiplies a number by 2 raised to a whole-number power.
    // A 3 MB file doubles in size 4 times, so its final size is 3 * 2^4 MB.
    double fileSizeMB = 3.0;
    int timesDoubled = 4;
    cout << "File size after doubling 4 times: " << scalbn(fileSizeMB, timesDoubled) << " MB" << endl;

    // 6. lround(): Rounds a number to the nearest integer (halves round away from zero).
    // A teacher rounds an average mark of 74.5 to the nearest whole mark.
    double averageMarks = 74.5;
    cout << "Rounded marks: " << lround(averageMarks) << endl;

    // 7. exp2(): Returns 2 raised to a given power.
    // A bacterium splits into 2 every hour, so after 10 hours there are 2^10 bacteria.
    double hoursPassedGrowing = 10.0;
    cout << "Bacteria after 10 hours: " << exp2(hoursPassedGrowing) << endl;

    // 8. nearbyint(): Rounds a number to the nearest whole value.
    // A petrol bill of Rs. 2347.6 is rounded to the nearest rupee.
    double petrolBill = 2347.6;
    cout << "Petrol bill rounded: " << nearbyint(petrolBill) << endl;

    // 9. fdim(): Returns the positive difference of two numbers (0 if the first is smaller).
    // Marks scored above the passing mark; a failing student gets 0 extra marks.
    double passingMarks = 50.0;
    cout << "Marks above pass (score 78): " << fdim(78.0, passingMarks) << endl;
    cout << "Marks above pass (score 40): " << fdim(40.0, passingMarks) << endl;

    // 10. fma(): Computes (x * y) + z in one step with a single rounding.
    // Total bill = price per item * quantity + delivery charges.
    double pricePerItem = 149.99;
    double itemQuantity = 6.0;
    double deliveryCharge = 200.0;
    cout << "Total bill: " << fma(pricePerItem, itemQuantity, deliveryCharge) << endl;
    cout << endl;

    // 11. isxdigit(): Checks whether a character is a hexadecimal digit (0-9, a-f, A-F).
    // Validates a colour code typed by a user by counting its valid hex characters.
    string colourCode = "1A3f9G";
    int validHex = 0;
    for (char ch : colourCode)
    {
        if (isxdigit(static_cast<unsigned char>(ch)))
        {
            validHex++;
        }
    }
    cout << "Colour code " << colourCode << " has " << validHex << " valid hex digits out of "
         << colourCode.size() << endl;

    // 12. ispunct(): Checks whether a character is a punctuation mark.
    // Counts punctuation marks in a message.
    string message = "Hello, world! Welcome to C++.";
    int punctuationCount = 0;
    for (char ch : message)
    {
        if (ispunct(static_cast<unsigned char>(ch)))
        {
            punctuationCount++;
        }
    }
    cout << "Punctuation marks in \"" << message << "\": " << punctuationCount << endl;

    // 13. is_sorted_until(): Returns the position of the first element that breaks ascending order.
    // Finds for how many weeks a student's quiz scores kept increasing.
    vector<int> weeklyScores = {5, 8, 12, 10, 15};
    auto breakPoint = is_sorted_until(weeklyScores.begin(), weeklyScores.end());
    cout << "Quiz scores kept rising for " << (breakPoint - weeklyScores.begin()) << " weeks" << endl;
    cout << endl;

    // 14. partial_sum(): Stores the running total of a range.
    // Running total of steps walked each day of the week.
    vector<int> dailySteps = {4000, 6500, 3000, 8000, 5500};
    vector<int> runningSteps(dailySteps.size());
    partial_sum(dailySteps.begin(), dailySteps.end(), runningSteps.begin());
    cout << "Running total of steps: ";
    for (int steps : runningSteps)
    {
        cout << steps << " ";
    }
    cout << endl;

    // 15. adjacent_difference(): Stores the difference between each element and the previous one.
    // Change in temperature from one day to the next.
    vector<int> temperatures = {30, 33, 31, 35, 38};
    vector<int> temperatureChange(temperatures.size());
    adjacent_difference(temperatures.begin(), temperatures.end(), temperatureChange.begin());
    cout << "Daily temperature change: ";
    for (size_t i = 1; i < temperatureChange.size(); i++)
    {
        cout << temperatureChange[i] << " ";
    }
    cout << endl;

    // 16. inner_product(): Multiplies two ranges element by element and adds the results.
    // Grocery bill = sum of (price * quantity) for every item.
    vector<int> prices = {120, 250, 80};
    vector<int> quantities = {2, 1, 5};
    int groceryBill = inner_product(prices.begin(), prices.end(), quantities.begin(), 0);
    cout << "Grocery bill: " << groceryBill << endl;

    // 17. iota(): Fills a range with consecutively increasing values.
    // Generates roll numbers starting from 1001 for a class of 6 students.
    vector<int> rollNumbers(6);
    iota(rollNumbers.begin(), rollNumbers.end(), 1001);
    cout << "Roll numbers: ";
    for (int roll : rollNumbers)
    {
        cout << roll << " ";
    }
    cout << endl;

    // 18. minmax_element(): Finds the smallest and largest elements in one pass.
    // Lowest and highest marks in a quiz.
    vector<int> quizMarks = {14, 9, 18, 11, 20, 7};
    auto extremes = minmax_element(quizMarks.begin(), quizMarks.end());
    cout << "Lowest mark: " << *extremes.first << ", Highest mark: " << *extremes.second << endl;

    // 19. rotate(): Rotates the elements of a range so a chosen element becomes the first.
    // A waiting queue where the next 2 customers are moved to the back.
    vector<string> queue = {"Ali", "Sara", "Hassan", "Zain", "Ayesha"};
    rotate(queue.begin(), queue.begin() + 2, queue.end());
    cout << "Queue after rotation: ";
    for (const string &person : queue)
    {
        cout << person << " ";
    }
    cout << endl;

    // 20. nth_element(): Places the element that would be at position n in sorted order there.
    // Finds the median of an odd number of marks without fully sorting them.
    vector<int> marks = {72, 55, 91, 63, 48, 85, 77};
    size_t middle = marks.size() / 2;
    nth_element(marks.begin(), marks.begin() + middle, marks.end());
    cout << "Median mark: " << marks[middle] << endl;

    return 0;
}
