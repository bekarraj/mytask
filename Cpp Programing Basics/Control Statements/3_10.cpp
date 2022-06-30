#include<iostream>
using namespace std;
int main()
{
	int num,f=1,i=1;
	cout<<"Enter the number:";
	cin>>num;
	
	do 
	{
		 f = f*i;
		 i++;
	}
	while(i<=num);
	
	cout<<"The factorial of "<<num<<" is "<<f;
	
	return 0;
}


