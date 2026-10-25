#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <numeric>
#include <algorithm>
#include <utility>
#include <bit>

using namespace std;
int main()
{
    //1.swap
    int x=10 , y=20;
    swap(x,y);
    cout<<"Swapped "<<" x "<<x<<" y "<<y<<endl;

    //2.max()
    cout<<"Max in 3 and 5: "<<max(3,5)<<endl;

    //3.abs()
    cout<<"abslute of -42: "<<abs(-42)<<endl;

    //4.sqrt()
    cout<<"sqrt of 49: "<<sqrt(49)<<endl;
    
    //5. pow()
    cout<<"2 raise to the power 10: "<<pow(2,10)<<endl;

    //6. to_string()
    cout<<"67 coverted to string: "<<to_string(67)<<endl;

    //7. floor()
    cout<<"round down 4.6: "<<floor(4.6)<<endl;

    //8. tolower()
    cout<<"convert A to a: "<<tolower('A')<<endl;

    //9. isdigit()
    cout<<"checking 7 is written a digit or not: "<<isdigit('7')<<endl;

    //10.stoi()
    cout<<"String 12345 converted to number: "<<stoi("12345")<<endl;

    //11. lcm()
    cout<<"LCM of 4 and 6 is: "<<lcm(4,6)<<endl;

    //12. gcd()
    cout<<"Greatest common divisor of 12 and 18 is: "<<gcd(12,18)<<endl;

    //13. popcount()
    cout<<"Number of bits in 255: "<<popcount(255u)<<endl;

    //14. hypot(a,b)
    cout<<"hypotenus of triangle with side 4 and 3: "<<hypot(3,4)<<endl;

    //15. cbrt()
    cout<<"Cube root of 27 is: "<<cbrt(27)<<endl;

    //16. midpoint()
    cout<<"Mid point of 8 and 12 is: "<<midpoint(8,12)<<endl;

    //17. isalpha()
    cout<<"checking is 8 a character or not: "<<isalpha('8');

    //18. has_single_bit()
    cout<<"checking is a number power of 2 or not: "<<__has_single_bit(64u)<<endl;

    //19. exchange(var,new)
    int z = 66;
    cout<<"Assign new value to variable and return old one "<<exchange(z,99)<<endl;

    //20. minmax()
    auto [lo,hi] = minmax(42,7);   
    cout<<"min= "<<lo<<"  max= "<<hi<<endl;



}