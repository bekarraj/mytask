#include<iostream>
using namespace std;
int main()
{
	try{
	int d,n1,n2;
	cout<<"Enter 1st number:";
	cin>>n1;
	cout<<"Enter 2nd number:";
	cin>>n2;
	if(n2==0)
	{
		throw "Division by zero condition!";
	}
	d=n1/n2;
	cout<<"The division is :"<<d<<endl;
	}
	catch(const char* msg)
	{
		cout<<msg;
	}
}
