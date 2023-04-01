/*Exercise 3 - Repetition

Write a C++ program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include<iostream>
using namespace std;
int main()
{
	int num;

	cout << "Enter Number :";
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cout << " " << i + 1;
	}
}

