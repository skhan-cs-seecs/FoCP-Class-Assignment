#include <iostream>
#include <iomanip>
#include <cctype>
#include <cmath>
using namespace std;

void printLine() { cout << "------------------------------\n"; }

void showMenu() {
    printLine();
    cout << "1 Prime check/count   2 Factorial" << endl;
    cout << "3 GCD and LCM         4 Hypotenuse + circle" << endl;
    cout << "5 Quadratic solver    6 Compound interest" << endl;
    cout << "7 C to F              8 Text analyzer" << endl;
    cout << "9 Uppercase text      10 Leap year" << endl;
    cout << "11 Power              0 Exit" << endl;
    printLine();
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return n > 1;
}

int countPrimesUpTo(int limit) {
    int count = 0;
    for (int i = 2; i <= limit; i++)
        if (isPrime(i)) count++;
    return count;
}

long long factorial(int n) { return n <= 1 ? 1 : n * factorial(n - 1); }

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int lcm(int a, int b) { return a / gcd(a, b) * b; }

double circleArea(double r) { return acos(-1.0) * pow(r, 2); }

double hypo(double a, double b) { return sqrt(a * a + b * b); }

double discriminant(double a, double b, double c) { return b * b - 4 * a * c; }

void solveQuad(double a, double b, double c) { 
    double d = discriminant(a, b, c);
    if (a == 0) cout << "a cannot be 0.\n";
    else if (d < 0) cout << "No real roots.\n";
    else cout << "x1 = " << (-b + sqrt(d)) / (2 * a)
              << "\nx2 = " << (-b - sqrt(d)) / (2 * a) << "\n";
}

double compoundInterest(double p, double rate, int years) {
    return p * pow(1 + rate / 100, years);
}

double celsiusToFahrenheit(double c) { return c * 9 / 5 + 32; }

double roundTo(double value, int places) {
    double f = pow(10, places);
    return round(value * f) / f;
}

double powerOf(double base, double exp) { return pow(base, exp); }

bool isLeapYear(int y) { return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0; }

void analyzeText() {         
    char ch;
    int letters = 0, vowels = 0, digits = 0, words = 0;
    bool inWord = false;
    cout << "Type text: ";
    while (cin.get(ch) && ch != '\n') {
        if (isalpha(ch)) { letters++;
        if (isVowel(ch)) vowels++; }
        if (isdigit(ch)) digits++;
        if (isspace(ch)) inWord = false;
        else if (!inWord) { inWord = true; words++; }
    }
    cout << "Letters: " << letters << "  Vowels: " << vowels
         << "  Digits: " << digits << "  Words: " << words << "\n";
}

void printUpperCase() {
    char ch;
    cin.ignore(1000, '\n');
    cout << "Type text: ";
    while (cin.get(ch) && ch != '\n') cout << (char)toupper(ch);
    cout << "\n";
}

bool runChoice(int choice) {              // calls all functions
    int n, m;
    double a, b, c;
    switch (choice) {
    case 1:
        cout << "Number to check, then count primes up to: ";
        cin >> n >> m;
        cout << n << (isPrime(n) ? " is prime" : " is not prime")
             << "; primes up to " << m << ": " << countPrimesUpTo(m) << "\n";
        break;
    case 2:
        cout << "n (0-20): ";
        cin >> n;
        cout << n << "! = " << factorial(n) << "\n";
        break;
    case 3:
        cout << "Two positive whole numbers: ";
        cin >> n >> m;
        cout << "GCD = " << gcd(n, m) << ", LCM = " << lcm(n, m) << "\n";
        break;
    case 4:
        cout << "Two legs: ";
        cin >> a >> b;
        c = hypo(a, b);
        cout << "Hypotenuse = " << roundTo(c, 2)
             << ", circle area = " << roundTo(circleArea(c), 2) << "\n";
        break;
    case 5:
        cout << "a b c: ";
        cin >> a >> b >> c;
        solveQuad(a, b, c);
        break;
    case 6:
        cout << "Principal, rate (%), years: ";
        cin >> a >> b >> n;
        cout << "Final amount = " << roundTo(compoundInterest(a, b, n), 2) << "\n";
        break;
    case 7:
        cout << "Celsius: ";
        cin >> a;
        cout << roundTo(celsiusToFahrenheit(a), 2) << " F\n";
        break;
    case 8: analyzeText(); break;
    case 9: printUpperCase(); break;
    case 10:
        cout << "Year: ";
        cin >> n;
        cout << n << (isLeapYear(n) ? " is" : " is not") << " a leap year\n";
        break;
    case 11:
        cout << "Base and exponent: ";
        cin >> a >> b;
        cout << roundTo(powerOf(a, b), 4) << "\n";
        break;
    case 0: return false;
    default: cout << "Invalid choice.\n";
    }
    return true;
}

int main() {
    int choice;
    cout << fixed << setprecision(2);
    do {
        showMenu();
        cout << "Choose: ";
        cin >> choice;
    } while (cin && runChoice(choice));
    cout << "Goodbye";
    return 0;
}
