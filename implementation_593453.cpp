//Name: ayesha salyana
//cms id: 593453
// class: bscs26-D

#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    //1 sqrt() function
    double x = 24;
    double answer;

    answer = sqrt(x);

    cout << answer << endl;

    //2 pow() Function
    int base = 3;
    int exponent = 2;

    int answer_2 = pow(base, exponent);

    cout << answer_2 << endl;

    //3 sort() Function
    int arr[] = {  4, 6, 2 , 8, 7 , 1 , 3};
    int n = sizeof(arr) / sizeof(arr[0]);
  
        sort(arr, arr + n);

    for (int i = 0; i < n; ++i)
        {cout << arr[i] << " ";}
    cout << endl;

    //4 find() Function
    vector<int> dataset{ 1, 89, 0, 7, 33, 45 };
    auto index = find(dataset.begin(), dataset.end(), 0);

    if (index != dataset.end()) {
        cout << "The element found at " << index - dataset.begin() << " index"<< endl;
    }
    else {
        cout << "Element not found"<< endl;
    }

    //5 binary_search ()function
    vector<int> arr_2 = { 10, 11, 12, 13, 14 };
    if ( binary_search (arr_2.begin(), arr_2.end(), 16)) {
        cout << 16 << " is present."<< endl;
    }
    else {
        cout << 16 << " is not present"<< endl;
    }
    cout << endl;

    //6 max() Function
    cout << max(7, 6)<< endl;

    //7 min() Function
    cout << min(7, 6)<< endl;

    //8 swap() function
    int a = 3, b = 4;
    cout << "Before swap: " << endl;
    cout << "a: " << a << " b: " << b;
    cout << endl;
    swap(a, b);

    cout << "After swap: " << endl;
    cout << "a: " << a << " b: " << b;

    //9 tolower() function
    string str = "HH";
    for (auto& a : str) {
        a = tolower(a);
    }
    cout << str<< endl;

    //10 toupper() function
    string str_2 = "helloooo";
    for (auto& a : str_2) {
        a = toupper(a);
    }

    cout << str << endl;

    //11 abs() function
    cout << abs(-30)<< endl;

    //12 cos() function
    cout << cos(3.14)<< endl;

    //13 exp() function
    cout << exp(2)<< endl;

    //14 floor() function
    cout << floor(2.75)<< endl;

    //15 sin() function
    cout << sin(3.14)<< endl;

    //16 tan() function
    cout << tan(3.14)<< endl;

    //17 fmax( function)
    cout << fmax(13,25.4)<< endl;

    //18 fmin() function
    cout << fmin(14.3, 67.4)<< endl;

    //19	log() function
    cout << log(3)<< endl;

    //20	log10() function
    cout << log10(100)<< endl;
    return 0;
}