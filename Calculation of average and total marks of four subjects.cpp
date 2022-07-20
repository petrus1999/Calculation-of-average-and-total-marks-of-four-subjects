// Calculation of average and total marks of four subjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main(){
	double sub1, sub2, sub3, sub4;
	double  total,average;
	string name, surname;
	int studentno;

	cout << "Enter your name and surname" << endl;
	cin >> name>>surname;
	cout << "Enter your student number" << endl;
	cin >> studentno;
	cout << "Enter marks of your  four  subject  " << endl;
	cin >> sub1>> sub2>> sub3>> sub4;

	total= sub1+ sub2+ sub3+ sub4;
	average = (total / 400);
	cout << "your fullnames are :" << name << surname << endl;
	cout << "your student number is :" << studentno << endl;
	cout << "Your total marks are:" << total << endl;
	cout << "Your  total average  is:" <<  average << endl;

	return 0;
	  

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
