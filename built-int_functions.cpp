#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;

int main() {
    // ---------- <cmath> ----------
    cout << "--- Math functions ---" << endl;
    cout << "1. sqrt(25)      = " << sqrt(25) << endl;
    cout << "2. pow(2, 5)     = " << pow(2, 5) << endl;
    cout << "3. fabs(-7.5)    = " << fabs(-7.5) << endl;
    cout << "4. ceil(4.2)     = " << ceil(4.2) << endl;
    cout << "5. floor(4.8)    = " << floor(4.8) << endl;
    cout << "6. round(4.5)    = " << round(4.5) << endl;
    cout << "7. sin(0)        = " << sin(0) << endl;
    cout << "8. cos(0)        = " << cos(0) << endl;
    cout << "9. log(1)        = " << log(1) << endl;
    cout << "10. exp(0)       = " << exp(0) << endl;

    // ---------- <cstring> ----------
    cout << "\n--- String functions ---" << endl;
    char str1[50] = "Hello";
    char str2[50];
    char str3[50] = " World";

    cout << "11. strlen(str1) = " << strlen(str1) << endl;

    strcpy(str2, str1);
    cout << "12. strcpy -> str2 = " << str2 << endl;

    cout << "13. strcmp(str1, str2) = " << strcmp(str1, str2) << endl;

    strcat(str1, str3);
    cout << "14. strcat -> str1 = " << str1 << endl;

    // ---------- <cctype> ----------
    cout << "\n--- Character functions ---" << endl;
    char ch = 'a';
    cout << "15. toupper('a') = " << (char)toupper(ch) << endl;
    cout << "16. tolower('A') = " << (char)tolower('A') << endl;
    cout << "17. isdigit('7') = " << (isdigit('7') ? "true" : "false") << endl;
    cout << "18. isalpha('x') = " << (isalpha('x') ? "true" : "false") << endl;

    // ---------- <cstdlib> ----------
    cout << "\n--- Random functions ---" << endl;
    srand(42);
    cout << "19. srand(42) seeded the generator" << endl;
    cout << "20. rand() % 100 = " << rand() % 100 << endl;

    return 0;
}