#include<iostream>
using namespace std;

class Date
{
public:
int day,month,year;

Date()     //deafault
{
cout<<"\nDefault Constructor:";
day=11;
month=1;
year=2022;
cout<<endl;
}

Date(int d,int m,int y)  //Argument 
{
cout<<"\nArgumented Constructor:\n";
day=d;
month=m;
year=y;
}

void show()
{
cout<<"\nDay :"<<day<<"\nMonth :"<<month<<"\nYear :"<<year;
}

	Date CopyDate(Date d)
	{
		Date d1 = d;
		return d1;
	}	 
};

int main()
{
	Date d;
Date d1(11,1,2022);
d1.show();
d.CopyDate(d1);
d.show();
}
