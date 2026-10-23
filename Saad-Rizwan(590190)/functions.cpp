#include <iostream>
#include <iomanip>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype>
#include <ctime>
#include <cstdlib>
#include <memory>

using namespace std;

void printVector(const string& label, const vector<int>& v)
{
    cout << label;
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

int main()
{
    cout << "Name: Saad Rizwan | CMS ID: 590190" << endl;
    cout << fixed << setprecision(2);

    // ---------------- <cmath> ----------------

    // 1. hypot: hypotenuse of a right triangle with sides 3 and 4
    cout << "\n1.  hypot(3, 4)             = " << hypot(3.0, 4.0) << endl;

    // 2. cbrt: cube root, also works for negative numbers
    cout << "2.  cbrt(-27)               = " << cbrt(-27.0) << endl;

    // 3. copysign: value 5 with the sign of -2
    cout << "3.  copysign(5, -2)         = " << copysign(5.0, -2.0) << endl;

    // ---------------- <numeric> ----------------

    // 4. lcm: least common multiple of 12 and 18
    cout << "4.  lcm(12, 18)             = " << lcm(12, 18) << endl;

    // 5. iota: fill the vector with 1, 2, 3, ..., 6
    vector<int> nums(6);
    iota(nums.begin(), nums.end(), 1);
    printVector("5.  iota from 1             : ", nums);

    // 6. accumulate: total of all elements in nums
    cout << "6.  accumulate (sum)        = "
         << accumulate(nums.begin(), nums.end(), 0) << endl;

    // 7. partial_sum: running totals of nums
    vector<int> prefix(nums.size());
    partial_sum(nums.begin(), nums.end(), prefix.begin());
    printVector("7.  partial_sum             : ", prefix);

    // 8. inner_product: dot product of {1,2,3} and {4,5,6} = 4 + 10 + 18
    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5, 6};
    cout << "8.  inner_product           = "
         << inner_product(a.begin(), a.end(), b.begin(), 0) << endl;

    // ----

    // 9. count: how many students scored exactly 90
    vector<int> marks = {72, 90, 45, 90, 61, 88, 90};
    cout << "9.  count(marks, 90)        = "
         << count(marks.begin(), marks.end(), 90) << endl;

    // 10. nth_element: find the median without fully sorting
    nth_element(marks.begin(), marks.begin() + marks.size() / 2, marks.end());
    cout << "10. nth_element (median)    = " << marks[marks.size() / 2] << endl;

    // 11. rotate: move the first 2 elements to the end
    vector<int> r = {1, 2, 3, 4, 5};
    rotate(r.begin(), r.begin() + 2, r.end());
    printVector("11. rotate by 2             : ", r);

    // 12. stable_partition: even numbers first, order kept inside each group
    vector<int> p = {7, 2, 9, 4, 1, 8, 6};
    stable_partition(p.begin(), p.end(), [](int x) { return x % 2 == 0; });
    printVector("12. stable_partition (even) : ", p);

    // 13. minmax_element: smallest and largest in one call
    vector<int> temps = {31, 25, 38, 22, 35};
    auto mm = minmax_element(temps.begin(), temps.end());
    cout << "13. minmax_element          = min " << *mm.first
         << ", max " << *mm.second << endl;

    // ---------------- <string> ----------------

    // 14. stoi: convert the text "590190" into an int
    int cms = stoi("590190");
    cout << "14. stoi(\"590190\") + 10     = " << cms + 10 << endl;

    // 15. to_string: convert a number back into text and join strings
    string label = "CMS-" + to_string(cms);
    cout << "15. to_string               = " << label << endl;

    // ---------------- <cctype> ----------------

    // 16. isalpha: count the letters in a string
    string text = "FoCP 2026!";
    int letters = 0;
    for (char c : text)
        if (isalpha(static_cast<unsigned char>(c)))
            letters++;
    cout << "16. isalpha letters in \"" << text << "\" = " << letters << endl;

    // ---------------- <iomanip> ----------------

    // 17. setw: print a neatly aligned table
    cout << "17. setw table:" << endl;
    cout << "    " << setw(8) << "Item" << setw(8) << "Qty" << endl;
    cout << "    " << setw(8) << "Pen" << setw(8) << 12 << endl;
    cout << "    " << setw(8) << "Book" << setw(8) << 3 << endl;

    // ---------------- <ctime> ----------------

    // 18. time: seconds passed since 1 January 1970
    time_t now = time(nullptr);
    cout << "18. time(nullptr)           = " << now << " seconds" << endl;

    // ---------------- <cstdlib> ----------------

    // 19. div: quotient and remainder in one call (125 minutes -> h and min)
    div_t duration = div(125, 60);
    cout << "19. div(125, 60)            = " << duration.quot << " h "
         << duration.rem << " min" << endl;

    // ---------------- <memory> ----------------

    // 20. make_unique: heap memory that is freed automatically
    unique_ptr<int> score = make_unique<int>(95);
    cout << "20. make_unique<int>(95)    = " << *score << endl;

    return 0;
}
