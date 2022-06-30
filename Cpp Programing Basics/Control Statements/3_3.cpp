#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter amount to be withdrawn:";
	cin>>a;
	int b=(a/10)*10;
	cout<<"Cashier gives you "<<b<<" currency notes of 10"<<endl;
	int d=(a/50)*10;
	cout<<"OR"<<endl;
	cout<<d<<" currency notes of 50"<<endl;
	int f=(a/100)*10;
	cout<<"OR"<<endl;
	cout<<f<<" currency notes of 100"<<endl;
	return 0;
}