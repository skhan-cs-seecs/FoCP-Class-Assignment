#include <iostream>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <string>
#include <vector>

int main() {
    // 1. std::sqrt - Square root
    std::cout << "1. sqrt(16) = " << std::sqrt(16.0) << "\n";

    // 2. std::pow - Power function
    std::cout << "2. pow(2, 3) = " << std::pow(2.0, 3.0) << "\n";

    // 3. std::abs - Absolute value
    std::cout << "3. abs(-15) = " << std::abs(-15) << "\n";

    // 4. std::ceil - Round up
    std::cout << "4. ceil(4.2) = " << std::ceil(4.2) << "\n";

    // 5. std::floor - Round down
    std::cout << "5. floor(4.8) = " << std::floor(4.8) << "\n";

    // 6. std::round - Nearest integer
    std::cout << "6. round(4.5) = " << std::round(4.5) << "\n";

    // 7. std::sin - Sine function (radians)
    std::cout << "7. sin(0) = " << std::sin(0.0) << "\n";

    // 8. std::cos - Cosine function (radians)
    std::cout << "8. cos(0) = " << std::cos(0.0) << "\n";

    // 9. std::log - Natural logarithm
    std::cout << "9. log(2.71828) = " << std::log(2.71828) << "\n";

    // 10. std::max - Maximum of two values
    std::cout << "10. max(10, 25) = " << std::max(10, 25) << "\n";

    // 11. std::min - Minimum of two values
    std::cout << "11. min(10, 25) = " << std::min(10, 25) << "\n";

    // 12. std::toupper - Convert character to uppercase
    std::cout << "12. toupper('a') = " << (char)std::toupper('a') << "\n";

    // 13. std::tolower - Convert character to lowercase
    std::cout << "13. tolower('Z') = " << (char)std::tolower('Z') << "\n";

    // 14. std::isalpha - Check if character is alphabetic
    std::cout << "14. isalpha('A') = " << (bool)std::isalpha('A') << "\n";

    // 15. std::isdigit - Check if character is a digit
    std::cout << "15. isdigit('7') = " << (bool)std::isdigit('7') << "\n";

    // 16. std::strlen - Length of C-style string
    const char* text = "Hello";
    std::cout << "16. strlen(\"Hello\") = " << std::strlen(text) << "\n";

    // 17. std::to_string - Convert numeric value to string
    std::string strNum = std::to_string(123);
    std::cout << "17. to_string(123) = " << strNum << "\n";

    // 18. std::stoi - Convert string to integer
    int parsedInt = std::stoi("456");
    std::cout << "18. stoi(\"456\") = " << parsedInt << "\n";

    // 19. std::swap - Swap values of two variables
    int a = 5, b = 10;
    std::swap(a, b);
    std::cout << "19. swap(5, 10) -> a = " << a << ", b = " << b << "\n";

    // 20. std::is_sorted - Check if a container is sorted
    std::vector<int> v = {1, 2, 3, 4};
    std::cout << "20. is_sorted({1, 2, 3, 4}) = " << std::boolalpha 
              << std::is_sorted(v.begin(), v.end()) << "\n";

    return 0;
}