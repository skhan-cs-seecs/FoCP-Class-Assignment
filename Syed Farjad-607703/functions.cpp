#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <string> 
#include <vector>

using namespace std;

void printVector(vector<int> list) {
    for (int a: list) cout << a << " ";
    cout << endl;
}

int main() {
    vector<int> numbers(7);
    vector<int> binaryNum = {0, 0, 1, 1, 0, 1, 0, 1};
    srand(time(0)); //seed the rand function with the current time value
    for (int i=0; i < 7; i++) {
        numbers[i] = rand() % 100;
    };
    int numToFind = numbers[5];

    cout << "pow(2,4): " << pow(2, 4) << endl;
    cout << "sqrt(25): " << sqrt(25) << endl;
    cout << "Euler's number: " << exp(1) << endl;
    cout << "max(9, 11): " << max(9,11) << endl;
    cout << "min(9, -9): " << min(9,-9) << endl;
    cout << "abs(-25): " << abs(-25) << endl;
    cout << "round(4.5): " << round(4.5) << endl;
    cout << "ceil(4.5): " << ceil(4.5) << endl;
    cout << "floor(4.5): " << floor(4.5) << endl;


    cout << "Before sorting: " << endl;
    printVector(numbers);
    cout << "After sorting: " <<endl;
    sort(numbers.begin(), numbers.end());
    printVector(numbers);

    cout << "Binary search to see if number " << numToFind << " is there " << ": "; 
    cout << binary_search(numbers.begin(), numbers.end(), numToFind) << endl;
    cout << "linear search for number " << numToFind << ": "; // returns the iterator which stores memory location of that element
    cout << find(numbers.begin(), numbers.end(), numToFind) - numbers.begin() << endl;

    cout << "toupper(a): " << toupper('a') << endl;
    string word = "PAKISTAN";
    for (auto &i: word) i = tolower(i);
    cout << "using tolower on \'PAKISTAN\': " << word << endl;
    
    cout << "Number vector after swapping the 1st and 5th element: ";
    swap(numbers[0], numbers[4]);
    printVector(numbers);

    cout << "sizeof(numbers)" << sizeof(numbers) << endl;

    cout << count(binaryNum.begin(), binaryNum.end(), 1) << endl;
}