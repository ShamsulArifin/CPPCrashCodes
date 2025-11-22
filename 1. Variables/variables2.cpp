#include <iostream>

using namespace std;

int main()
{
	// integer (whole number)
	int age = 21;
	int year = 2023;
	int day = 7;

	cout << age << " " << year << " " << day << endl;

	day = 7.5;

	/*
	will not print value after decimal
	int type variable cant store decimal
	so the value will be truncated
	 */
	cout << day << endl;

	// double (number including decimal)
	double price = 100.99;
	double gpa = 2.5;
	double temperature = 25.6;

	cout << price << " " << gpa << " " << temperature << " " << endl;

	// char (single character)
	char grade = 'A';
	char initial = 'B';
	char currency = '$';

	cout << grade << " " << initial << " " << currency << endl;

	/*
	will give an warning overflow in conversion 
	but will print only the last character
	*/

	// initial = 'BA';

	// cout << grade << " " << initial << " " << currency << endl;

	// boolean (true or false)
	bool student = false;
	bool power = true;
	bool forSale = true;

	// will print 0 for false and 1 for true
	cout << student << " " << power << " " << forSale << endl;

	// string (objects that represents a sequence of text)
	string name =  "Sam";
	string food = "Pizza";
	string address = "123 Fake St.";

	cout << name << " " << food << " " << day << endl;

	cout << "Hello " << name << endl;
	cout << "You are " << age << " years old." << endl;


	return 0;
}