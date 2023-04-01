/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<iostream>
using namespace std;

int main()
{
	int mark1, mark2,tot;
	float avg;

	cout << "Enter mark 1 : ";
	cin >> mark1;
	cout << "Enter mark 2 :";
	cin >> mark2;

	tot = mark1 + mark2;

	cout << "Total mark is : " << tot<<endl;

	avg = tot / 2;

	cout << "Average is : " << avg<<endl;


	return 0;
}

