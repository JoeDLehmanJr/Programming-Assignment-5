#include <iostream>
#include "FeetInches.h"

using namespace std;

int main()
{
	FeetInches fi_1;
	cout << "fi_1 " << fi_1.toString() << endl;
	// cout << "fi_1 " << fi_1 << endl;  // overloaded << version

	FeetInches fi_2(5, 2);
	cout << "fi_2 " << fi_2.toString() << endl;
	// cout << "fi_2 " << fi_2 << endl;  // overloaded << version

	fi_2.setData(6, 7);
	cout << "fi_2 " << fi_2.toString() << endl;
	// cout << "fi_2 " << fi_2 << endl;  // overloaded << version

	fi_2.setData(4, 32);
	cout << "fi_2 " << fi_2.toString() << endl;
	// cout << "fi_2 " << fi_2 << endl;  // overloaded << version

	// test code for >=, <=, and !=
	/*
	cout << "fi_2 >= fi_1 is " << (fi_2 >= fi_1) << endl;
	cout << "fi_1 >= fi_2 is " << (fi_1 >= fi_2) << endl;

	cout << "fi_2 <= fi_1 is " << (fi_2 <= fi_1) << endl;
	cout << "fi_1 <= fi_2 is " << (fi_1 <= fi_2) << endl;

	cout << "fi_1 != fi_1 is " << (fi_1 != fi_1) << endl;
	cout << "fi_1 != fi_2 is " << (fi_1 != fi_2) << endl;
	*/

	system("pause");
}