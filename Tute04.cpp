/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include<iostream>
using namespace std;

int minimum(int no1, int no2);
int maximum(int no1, int no2);
int multiply(int no1, int no2);

int main()
{
	int no1, no2;
	cout<<"Enter a value for no 1 : ";
	cin>>no1;
	cout<<"Enter a value for no 2 : ";
	cin>>no2;
	cout<<"Minimum number is : " <<minimum(no1, no2)<<endl;
	cout<<"Maximum number is : " <<maximum(no1, no2)<<endl;
	cout<<"Multiplication is : " <<multiply(no1, no2)<<endl;
	return 0;
}
int minimum(int no1, int no2)
{
	if (no1 < no2)
	{
		return no1;
	}
	else
	{
		return no2;
	}
}
int maximum(int no1, int no2)
{
	if (no1 < no2)
	{
		return no2;
	}
	else
	{
		return no1;
	}
}
int multiply(int no1, int no2)
{
	return no1 * no2;
}
