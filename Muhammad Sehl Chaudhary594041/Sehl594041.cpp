#include<iostream>
#include<string>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main()
{
    char ch = 'A';
    char digit = '7';
    string name = "Sehl";

    double x = 5.5;
    double y = -3.0;

    cout << fixed << setprecision(2);

    cout << "1. isalpha('A'): " << boolalpha << static_cast<bool>(isalpha(ch)) << endl;

    cout << "2. isalnum('7'): " << static_cast<bool>(isalnum(digit)) << endl;

    cout << "3. isdigit('7'): "<< static_cast<bool>(isdigit(digit)) << endl;

    cout << "4. name.length(): " << name.length() << endl;

    cout << "5. name.size(): " << name.size() << endl;

    cout << "6. name.empty(): "<< name.empty() << endl;

    int a = 10, b = 20;
    swap(a, b);
    cout << "7. After swap: a = " << a<< ", b = " << b << endl;

    cout << "8. hypot(3, 4): " << hypot(3.0, 4.0) << endl;

    cout << "9. ceil(5.3): "<< ceil(5.3) << endl;

    cout << "10. floor(5.8): " << floor(5.8) << endl;

    cout << "11. exp(2): "<< exp(2.0) << endl;

    cout << "12. rand(): "<< rand() << endl;

    cout << "13. cbrt(27): "<< cbrt(27.0) << endl;

    cout << "14. fmod(10.5, 3): "<< fmod(10.5, 3.0) << endl;

    cout << "15. copysign(5, -3): "<< copysign(5.0, -3.0) << endl;

    cout << "16. trunc(5.8): "<< trunc(5.8) << endl;

    cout << "17. fabs(-5.5): "<< fabs(-5.5) << endl;

    cout << "18. exp2(3): " << exp2(3.0) << endl;

    cout << "19. fdim(8, 3): " << fdim(8.0, 3.0) << endl;

    cout << "20. max(10, 20): " << max(10, 20) << endl;

    return 0;
}
