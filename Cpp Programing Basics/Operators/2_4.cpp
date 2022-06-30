#include<iostream>
using namespace std;
int main()
{
	int num1, num2, GREATER;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	GREATER = (num1 > num2) ? num1 : num2;
	cout << "Greater number is: " << GREATER << endl;
	return 0;
}