#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool is_big(int x)  { return x > 4; }
bool is_even(int x) { return x % 2 == 0; }

int main() {
    cout << boolalpha;                      // print true/false instead of 1/0

    vector<int> nums = {3, 1, 2};
    sort(nums.begin(), nums.end());         // 1. sort: 1 2 3
    cout << "sort: " << nums[0] << nums[1] << nums[2] << endl;

    reverse(nums.begin(), nums.end());      // 2. reverse: 3 2 1
    cout << "reverse: " << nums[0] << nums[1] << nums[2] << endl;

    vector<int> a = {10, 20, 30};
    auto pos = find(a.begin(), a.end(), 20);            // 3. find 20
    cout << "find: 20 is at index " << pos - a.begin() << endl;

    vector<int> b = {1, 2, 2, 2, 3};
    cout << "count: " << count(b.begin(), b.end(), 2) << endl;          // 4. count 2s

    vector<int> c = {4, 9, 1};
    cout << "max_element: " << *max_element(c.begin(), c.end()) << endl;  // 5. biggest
    cout << "min_element: " << *min_element(c.begin(), c.end()) << endl;  // 6. smallest

    int x = 1, y = 2;
    swap(x, y);                             // 7. swap
    cout << "swap: x=" << x << " y=" << y << endl;

    cout << "abs: " << abs(-5) << endl;     // 8. abs

    vector<int> d(3);
    fill(d.begin(), d.end(), 7);            // 9. fill with 7
    cout << "fill: " << d[0] << d[1] << d[2] << endl;

    vector<int> e = {1, 2, 1};
    replace(e.begin(), e.end(), 1, 9);      // 10. replace 1 with 9
    cout << "replace: " << e[0] << e[1] << e[2] << endl;

    cout << "ceil: " << ceil(2.1) << endl;  // 11. ceil

    vector<int> f = {1, 5, 8};
    cout << "count_if: " << count_if(f.begin(), f.end(), is_big) << endl;   // 12. how many > 4
    cout << "any_of: " << any_of(f.begin(), f.end(), is_even) << endl;      // 13. any even?

    string str = to_string(42);             // 14. number -> string
    cout << "to_string: " << str << endl;

    int num = stoi("100");                  // 15. string -> number
    cout << "stoi: " << num + 1 << endl;

    cout << "strlen: " << strlen("hello") << endl;   // 16. length of "hello"

    string word = "Hello World";
    cout << "substr: " << word.substr(0, 5) << endl; // 17. first 5 letters

    cout << "isalpha: " << (isalpha('a') != 0) << endl;   // 18. 'a' is a letter
    cout << "isdigit: " << (isdigit('5') != 0) << endl;   // 19. '5' is a digit

    vector<int> g = {1, 3, 5, 7};
    cout << "binary_search: " << binary_search(g.begin(), g.end(), 5) << endl;  // 20. is 5 there?

    return 0;
}