#include<iostream>
#define DIVIDE_BY_TWO(x)  (x=x>>1)
#define MULTIPLY_BY_TWO(a) (a=a<<1)
using namespace std;
int main()
{
	int x=10;
	int a=x;
	cout<<"Multiply by two "<<MULTIPLY_BY_TWO(a)<<endl;
	cout<<"Divide by two "<<DIVIDE_BY_TWO(x);
	
	
}
