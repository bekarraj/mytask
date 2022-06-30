#include<iostream>
#define ISEVEN(n)	((n%2 == 0) ? 1 : 0)
#define ISODD(n)	((n%2 != 0) ? 1 : 0)
using namespace std;
int main(void) 
{
	
	int number;
	
	cout<<"Enter the number: ";
	cin>>number;
	
	if(ISEVEN(number))
	    cout<<"The given number is even\n";
	else if(ISODD(number))
	    cout<<"The given number is odd\n";
	else 
	    cout<<"An Invalid Input\n";
		
	return 0;
}
