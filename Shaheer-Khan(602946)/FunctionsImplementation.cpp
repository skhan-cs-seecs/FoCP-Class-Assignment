// Name: Shaheer Khan
// CMSID: 602946
// Funtions Implemented
#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    // A single string variable acts as our sequence of values.
    string s = "Shaheer";
    cout << "Original: " << s << "\n";

    // 1. sort
    sort(s.begin(), s.end());
    cout << "1. sort: " << s << "\n";

    // 2. reverse
    reverse(s.begin(), s.end());
    cout << "2. reverse: " << s << "\n";

    // 3. find
    auto it = find(s.begin(), s.end(), 'h');
    cout << "3. find 'h' at index: " << (it - s.begin()) << "\n";

    // 4. count
    cout << "4. count of 'e': " << count(s.begin(), s.end(), 'e') << "\n";

    // 5. find_if (first character greater than 'h')
    auto big = find_if(s.begin(), s.end(), [](char c) { return c > 'h'; });
    cout << "5. first char > 'h': " << *big << "\n";

    // 6. count_if (characters greater than 'e')
    cout << "6. count > 'e': "
         << count_if(s.begin(), s.end(), [](char c) { return c > 'e'; }) << "\n";

    // 7. max_element
    cout << "7. max: " << *max_element(s.begin(), s.end()) << "\n";

    // 8. min_element
    cout << "8. min: " << *min_element(s.begin(), s.end()) << "\n";

    // 9. accumulate (sum of the character codes)
    cout << "9. sum of char codes: " << accumulate(s.begin(), s.end(), 0) << "\n";

    // 10. binary_search (needs a sorted range)
    sort(s.begin(), s.end());
    cout << "10. binary_search for 'r': "
         << (binary_search(s.begin(), s.end(), 'r') ? "found" : "not found") << "\n";

    // 11. lower_bound (first element not less than 'e')
    auto lb = lower_bound(s.begin(), s.end(), 'e');
    cout << "11. lower_bound('e') index: " << (lb - s.begin()) << "\n";

    // 12. unique (sorted, so duplicates are adjacent)
    s.erase(unique(s.begin(), s.end()), s.end());
    cout << "12. unique: " << s << "\n";

    // 13. fill
    string filled = "12345";
    fill(filled.begin(), filled.end(), 'x');
    cout << "13. fill: " << filled << "\n";

    // 14. swap
    int a = 10, b = 20;
    swap(a, b);
    cout << "14. swap: a=" << a << ", b=" << b << "\n";

    // 15. for_each (print the ASCII code of each character)
    cout << "15. for_each ASCII codes: ";
    for_each(s.begin(), s.end(), [](char c) { cout << int(c) << " "; });
    cout << "\n";

    // 16. all_of
    cout << "16. all_of >= 'A': "
         << (all_of(s.begin(), s.end(), [](char c) { return c >= 'A'; }) ? "true" : "false") << "\n";

    // 17. any_of
    cout << "17. any_of == 'r': "
         << (any_of(s.begin(), s.end(), [](char c) { return c == 'r'; }) ? "true" : "false") << "\n";

    // 18. stoi
    string num = "123";
    cout << "18. stoi: " << stoi(num) + 1 << "\n";

    // 19. to_string
    string t = to_string(456) + "!";
    cout << "19. to_string: " << t << "\n";

    // 20. iota
    string letters = "     ";
    iota(letters.begin(), letters.end(), 'a');
    cout << "20. iota: " << letters << "\n";

    return 0;
}
