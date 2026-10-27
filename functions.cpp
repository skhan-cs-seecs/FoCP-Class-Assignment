// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int a=3, b=4;
//     cout<<"Before swapping: a = "<<a<<" b = "<<b<<endl;
//     swap(a,b);
//     cout<<"After swapping: a = "<<a<<" b = "<<b<<endl;
//     return 0;
// }


// #include <iostream>
// #include <cctype>
// using namespace std;

// int main(){
//     char ch,lower;
//     cout<<"Enter any uppercase character: ";
//     cin>>ch;
//     lower = tolower(ch);
//     cout<<"The lowercase character is: "<<lower<<endl;
//     return 0;
// }

// #include <iostream>
// #include <cctype>
// using namespace std;

// int main(){
//     char ch,upper;
//     cout<<"Enter any lowercase character: ";
//     cin>>ch;
//     upper = toupper(ch);
//     cout<<"The uppercase character is: "<<upper<<endl;
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
//     double a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     double result = hypot(a,b);
//     cout << "Hypotenuse of " << a << " and " << b << " of right angle triangle is: " << result << endl;
//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string name;

//     cout << "Enter your full name: ";
//     getline(cin, name);

//     cout << "Your name is: " << name;

//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
//     float a;
//     cout<<"Enter a number: ";
//     cin>>a;
//     cout<<"Less than or equal to "<<a<<" is: "<<floor(a)<<endl;
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
//     float a;
//     cout<<"Enter a number: ";
//     cin>>a;
//     cout<<"Greater than or equal to "<<a<<" is: "<<ceil(a)<<endl;
//     return 0;
// }


// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double num = 7.85;

//     cout << "Original number: " << num << endl;
//     cout << "After truncation: " << trunc(num) << endl;

//     return 0;
// }


// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double a = 10.5;
//     double b = 3.0;

//     cout << "Remainder = " << fmod(a, b) << endl;

//     return 0;
// }


// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double num = 1.0/0.0;

//     if (isinf(num)) {
//         cout << "The number is infinite." << endl;
//     } else {
//         cout << "The number is not infinite." << endl;
//     }

//     return 0;
// }


/*#include <iostream>
using namespace std;
int main(){
    char name[] = "Aliyan Ahmad";
    cout<<"Only write first 6 characters: ";
    cout.write(name, 6);
    return 0;
}*/

// #include <iostream>
// using namespace std;
// int main(){
//     char text[6];
//     cout<<"Enter characters: ";
//     cin.read(text, 3);
//     cout<<"You entered: ";
//     cout.write(text, 3);
//     return 0;
// }


// #include <iostream>
// #include <cmath>
// using namespace std;
// int main (){
//     cout << copysign(-1.0, 2.0) << endl; // Output: 1.0
//     cout << copysign(1.0, 2.0) << endl; // Output: 1.0
//     cout << copysign(-1.0, -2.0) << endl; // Output: -1.0
//     cout << copysign(1.0, -2.0) << endl; // Output: -1.0
//     cout << copysign(-3.5, 0.0) << endl; // Output: 3.5
//     cout << copysign(3.5, -0.0) << endl; // Output: -3.5
//     return 0;
// }


// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     double x = nan("1.0");
//     cout <<"value of x is: " << x << endl;
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// #include <iomanip>
// using namespace std;
// int main() {
//     double x = 5.0;
//     long double y = 10.0;

//     double result = nexttoward(x, y);

//     cout << setprecision(17);
//     cout << "Original value: " << x << endl;
//     cout << "Next value:     " << result << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string name = "Aliyan";

//     name.append(" Ahmad");

//     cout << name;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string name = "Aliyan";
//     cout << name.back();
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string _name = "Aliyan Ahmad";
//     string name ="ALIYAN AHMAD";
//     _name.erase(6,1);
//      name.erase(6);
//     cout << _name << endl;
//     cout << name;
//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string name1 = "ALi";
//     string name2 = "ALi";
//     string name3 = "ALi";
//     name1.insert(0, "yan");
//     name2.insert(1, "yan");
//     name3.insert(3, "yan");
//     cout << name1<<endl; 
//     cout << name2<<endl;
//     cout << name3<<endl;
//     return 0;
// }

// #include <iostream>
// #include <ctime>
// using namespace std;
// int main(){
//     int facto = 1;
//     clock_t start = clock();
//     // Your code here
//     for(int i = 1; i <= 5; i++) {
//         facto *= i;
//         cout << "Factorial of " << i << " is: " << facto << endl;
//     }
//     clock_t end = clock();
//     double time_spent = ((double)(end - start)) / CLOCKS_PER_SEC;
//     cout << "Time spent: " << time_spent << " seconds" << endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string str1 = "Aliyan";
//     string str2 = "Ahmad";
//     cout << str1.compare(str2);
//     cout << str2.compare(str1);
//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;
int main(){
    string name = "Aliyan Aliyan";
    cout << name.find('i');
    return 0;
}