#include<iostream>
using namespace std;

class Date
{
   int d1,d2;
   
   public:
   	
    Date(int d)
    {
    	d1 = d;
	}
	
	friend void operator+(Date & D)
	{
	   D.d2 = D.d1 + 1 ;
       cout<<D.d2;	
	}
};


int main()
{
   int d;
   cout<<"Enter the date:";
   cin>>d;

  Date D(d);
  +D;
   return 0;
}
