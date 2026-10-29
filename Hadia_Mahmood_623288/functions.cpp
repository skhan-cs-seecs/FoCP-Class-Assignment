//Name: Hadia Mahmood CMS ID: 623288
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <cstring>
#include <algorithm>
#include <vector>
#include <chrono>
using namespace std;

void ShowMenu() {
	cout << "--------float related functions--------" << endl;
	cout << "1. Find the remainder of the floating point division operation \n"
		<< "2. Find larger of two floating point values \n"
		<< "3. Find smaller of two floating point values \n"
		<< "4. Find e^x \n"
		<< "5. Find lnx \n"
		<< "6. Find x^y \n"
		<< "7. Find square root of x \n"
		<< "8. Find sin(x) \n"
		<< "9. Find cos(x) \n"
		<< "10. Find tan(x) \n"
		<< "11. Round float to nearest integer" << endl;
	cout << "--------string related functions--------" << endl;
	cout << "12. Concatnate two strings \n"
		<< "13. Return length of string \n"
		<< "14. Convert string to lowercase \n"
		<< "15. Convert string to uppercase" << endl;
	cout << "--------vector related functions--------" << endl;
	cout << "16. Sort vector \n"
		<< "17. Search for 0 in vector using linear search" << endl;
	cout << "-------------exit-------------" << endl;
	cout << "Write -1 to exit" << endl;
}



int main()
{
	int a = 0;
	float num1, num2;
	char mystr[] = "Hello, world!";
	string str = "HELLO, WORLD!";
	string str2 = "hello, world!";
	char dest[50] = "Hello,";
	char src[50] = " world!";
	vector<int> v = { 1, 4, 3, 2, 5 };

	//start the clock
	auto start = chrono::high_resolution_clock::now();
	ShowMenu();
	do
	{
		cout << "Select a number ";
		cin >> a;
		switch (a) {
			//float related functions start:
		case 1:
			cout << "Enter two numbers ";
			cin >> num1 >> num2;
			cout << fixed << setprecision(2) << "The remainder of " << num1 << " and " << num2 << " is " << fmod(num1, num2) << endl;
			break;
		case 2:
			cout << "Enter two numbers ";
			cin >> num1 >> num2;
			cout << "The larger floating point value is " << fmax(num1, num2) << endl;
			break;
		case 3:
			cout << "Enter two numbers ";
			cin >> num1 >> num2;
			cout << "The smaller floating point value is " << fmin(num1, num2) << endl;
			break;
		case 4:
			cout << "Enter a number ";
			cin >> num1;
			cout << "The value of e to the power of x is " << exp(num1) << endl;
			break;
		case 5:
			cout << "Enter a number ";
			cin >> num1;
			cout << "The value of ln(" << num1 << ") is " << log(num1) << endl;
			break;
		case 6:
			cout << "Enter two numbers ";
			cin >> num1 >> num2;
			cout << num1 << "^" << num2 << " is " << pow(num1, num2) << endl;
			break;
		case 7:
			cout << "Enter a number ";
			cin >> num1;
			cout << "Square root of " << num1 << " is " << sqrt(num1) << endl;
			break;
		case 8:
			cout << "Enter a number ";
			cin >> num1;
			cout << "Sin(" << num1 << ") is " << sin(num1) << endl;
			break;
		case 9:
			cout << "Enter a number ";
			cin >> num1;
			cout << "Cos(" << num1 << ") is " << cos(num1) << endl;
			break;
		case 10:
			cout << "Enter a number ";
			cin >> num1;
			cout << "Tan(" << num1 << ") is " << tan(num1) << endl;
			break;
		case 11:
			cout << "Enter a number ";
			cin >> num1;
			cout << num1 << " rounded to the nearest integer is " << round(num1) << endl;
			break;
			//string related functions start:
		case 12:
			strcat_s(dest, sizeof(dest), src);
			cout << dest << endl;
			break; 
		case 13:
			cout << "String has a length of " << strlen(mystr) << endl;
			break;
		case 14:
			//using tolower() for each character
			for (auto& a : str) {
				a = tolower(a);
			}
			cout << str << endl;
			break;
		case 15:
			//using toupper() for each character
			for (auto& a : str2) {
				a = toupper(a);
			}
			cout << str2 << endl;
			break;
			//vector related functions start here:
		case 16:
			sort(v.begin(), v.end());
			for (auto i : v)
				cout << setw(2) << i;
			cout << endl;
			break;
		case 17:
			auto index = find(v.begin(), v.end(), 0);
			if (index != v.end()) {
				cout << "The element found at "
					<< index - v.begin() << " index";
			}
			else {
				cout << "Element not found" << endl;
			}
			break;
		}
	} while (a != -1);
	//stop the clock
	auto stop = chrono::high_resolution_clock::now();
	//calculate duration
	auto duration = chrono::duration_cast<chrono::seconds>(stop - start);
	//print in execution in seconds
	cout << "Execution Time: " << duration.count() << " seconds" << std::endl;
}