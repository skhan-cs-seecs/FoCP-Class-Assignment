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

void printVector(const string& label, const vector<int>& v) {
    cout << label;
    for (int x : v) cout << x << " ";
    cout << endl;
}

int main() {
    cout << "Name: Saad Rizwan | CMS ID: 590190" << endl;
    cout << fixed << setprecision(2);

    cout << "\n1. hypot(3, 4) = " << hypot(3.0, 4.0) << endl;

    cout << "2. cbrt(-27) = " << cbrt(-27.0) << endl;

    cout << "3. copysign(5, -2) = " << copysign(5.0, -2.0) << endl;

    cout << "4. lcm(12, 18) = " << lcm(12, 18) << endl;

    vector<int> nums(6);
    iota(nums.begin(), nums.end(), 1);
    printVector("5. iota from 1 : ", nums);

    cout << "6. accumulate (sum) = " << accumulate(nums.begin(), nums.end(), 0) << endl;

    vector<int> prefix(nums.size());
    partial_sum(nums.begin(), nums.end(), prefix.begin());
    printVector("7. partial_sum : ", prefix);

    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5, 6};
    cout << "8. inner_product = " << inner_product(a.begin(), a.end(), b.begin(), 0) << endl;

    vector<int> marks = {72, 90, 45, 90, 61, 88, 90};
    cout << "9. count(marks, 90) = " << count(marks.begin(), marks.end(), 90) << endl;

    nth_element(marks.begin(), marks.begin() + marks.size() / 2, marks.end());
    cout << "10. nth_element (median) = " << marks[marks.size() / 2] << endl;

    vector<int> r = {1, 2, 3, 4, 5};
    rotate(r.begin(), r.begin() + 2, r.end());
    printVector("11. rotate by 2 : ", r);

    vector<int> p = {7, 2, 9, 4, 1, 8, 6};
    stable_partition(p.begin(), p.end(), [](int x) { return x % 2 == 0; });
    printVector("12. stable_partition (even) : ", p);

    vector<int> temps = {31, 25, 38, 22, 35};
    auto mm = minmax_element(temps.begin(), temps.end());
    cout << "13. minmax_element = min " << *mm.first << ", max " << *mm.second << endl;

    int cms = stoi("590190");
    cout << "14. stoi(\"590190\") + 10 = " << cms + 10 << endl;

    string label = "CMS-" + to_string(cms);
    cout << "15. to_string = " << label << endl;

    string text = "FoCP 2026!";
    int letters = 0;
    for (char c : text) {
        if (isalpha(static_cast<unsigned char>(c))) letters++;
    }
    cout << "16. isalpha letters in \"" << text << "\" = " << letters << endl;

    cout << "17. setw table:" << endl;
    cout << "  " << setw(8) << "Item" << setw(8) << "Qty" << endl;
    cout << "  " << setw(8) << "Pen" << setw(8) << 12 << endl;
    cout << "  " << setw(8) << "Book" << setw(8) << 3 << endl;

    time_t now = time(nullptr);
    cout << "18. time(nullptr) = " << now << " seconds" << endl;

    div_t duration = div(125, 60);
    cout << "19. div(125, 60) = " << duration.quot << " h " << duration.rem << " min" << endl;

    unique_ptr<int> score = make_unique<int>(95);
    cout << "20. make_unique<int>(95) = " << *score << endl;

    return 0;
}
