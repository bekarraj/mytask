#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,mod,n;
	cout<<"Enter the number:";
	cin>>num;
	n = num;
	while(num>0)
	{
		 mod = num % 10;
		 sum = sum + mod;
		 num = num /10;
	}
	cout<<"The sum of the digits of "<<n<<" is "<<sum;
}
