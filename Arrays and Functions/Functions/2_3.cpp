// write a cpp program to print the factorial of a number.

#include<iostream>
using namespace std;

int fact( int a){
	int fac=1;
	while(a>1){
		fac=fac*a;
		a--;
	}
	return  fac;
}


int main()
{
	int a;
	cout<<"Enter a positive number : "<<endl;
	cin>>a;
	cout<<"The factorial of "<<a<<" = "<<fact(a);
}