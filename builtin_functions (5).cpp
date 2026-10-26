
#include <iostream>
#include <cmath>      
#include <algorithm>   
#include <cctype>      
#include <string>      
#include <numeric>     
#include <cstdlib>    
#include <utility>    
#include <memory>     
#include <cstring>     
#include <vector>
using namespace std;

int main() {


    vector<int> v = {3, 1, 2};      
    vector<int> w(3);               
    string word = "Hell";
    string text = "Hello";
    int a = 1, b = 2;

    cout << "1. ceil(2.3) = " << ceil(2.3) << endl;
    cout << "2. floor(2.7) = " << floor(2.7) << endl;

    sort(v.begin(), v.end());      cout << "3. sort = " << v[0] << v[1] << v[2] << endl;
    reverse(v.begin(), v.end());   cout << "4. reverse = " << v[0] << v[1] << v[2] << endl;
    cout << "5. find 2 at position " << find(v.begin(), v.end(), 2) - v.begin() << endl;

    cout << "6. isspace(' ') = " << (isspace(' ') != 0) << endl;
    cout << "7. isalpha('A') = " << (isalpha('A') != 0) << endl;

    word.push_back('o');           cout << "8. push_back = " << word << endl;
    cout << "9. stoi(\"123\") = " << stoi("123") << endl;

    cout << "10. lcm(4, 6) = " << lcm(4, 6) << endl;
    cout << "11. gcd(12, 18) = " << gcd(12, 18) << endl;
    iota(w.begin(), w.end(), 10);  cout << "12. iota = " << w[0] << " " << w[1] << " " << w[2] << endl;

    cout << "13. rand() = " << rand() << endl;

    swap(a, b);                    cout << "15. swap(1, 2) = " << a << " " << b << endl;
    string moved = move(text);     cout << "16. move = " << moved << endl;

    cout << "17. addressof(a) = " << addressof(a) << endl;
    cout << "18. strlen(\"Hello\") = " << strlen("Hello") << endl;
    cout << "19. stod(\"3.14\") = " << stod("3.14") << endl;
    cout << "20. front = " << v.front() << endl;

    cout << "14. exit(0) = program stops here" << endl;
    exit(0);   
}
