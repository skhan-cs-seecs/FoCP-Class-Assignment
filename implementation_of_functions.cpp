/*
Name: Adan Shabbir
CMS ID: 596547
Assignment: Implementation of 20 C++ Functions
*/



#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string s, a, b, c;
	//1.insert()
	s = "Hello World";
	s.insert(1, "!");
	cout << "1.insert() " << s << endl;

	//2.erase()
	s.erase(3, 6);
	cout << "2.erase() " << s << endl;

	//3.empty()
	a = "";
	cout << "3.empty() " << a.empty() << endl;

	//4.pop_back()
	b = "Computer";
	b.pop_back();
	cout << "4.pop_back() " << b << endl;

	//5.push_back()
	c = "Science";
	c.push_back('2');
	cout << "5.push_back() " << c << endl;

	//6.ceil()
	cout << "6.ceil() " << ceil(4.9) << endl;

	//7.floor()
	cout << "7.floor() " << floor(5.4) << endl;

	//8.find()
	cout << "8.find()" << c.find("e") << endl;

	//9.at()
	cout << "9.at() " << c.at(2) << endl;

	//10.assign()
	string name = "Computer";
	name.assign("Computer Science");
	cout << "10.assign() " << name << endl;

	//11.size()
	cout << "11.Size: " << name.size() << endl;

	//12.append()
	string sentence = "She is ";
	sentence.append("studying .");
	cout << "12.append() " << sentence << endl;

	//13.compare()
	string str_1, str_2;
	str_1 = "abc";
	str_2 = "defg";
	int result = str_1.compare(str_2);
	if (result == 0)
	{
		cout << "Both strings are equal." << endl;
	}
	else if (result <0)
	{
		cout << "First string comes before second string."<<endl;
	}
	else {
		cout <<"First string comes after second string." << endl;
	}

	//14.isalpha()
	cout << "14.isalpha() " << isalpha('a') << endl;

	//15.isdigit()
	cout << "15.isdigit() " << isdigit('7') << endl;
	//16.log()
	cout << "16.log() " << log(5) << endl;
	//17.substr()
	string word = "Hello World";
	cout << "17. substr() " << word.substr(0,5) << endl;


	//18.replace()
	string word1 = "Source File";
	word1.replace(7,4,"Code");
	cout << "18.replace()" << word1 << endl;

	//19.front()
	string word2 = "Programming";
	cout << "19.front()" << word2.front() << endl;
	//20.back()
	cout << "20.back()" << word2.back() << endl;
	return 0;
}