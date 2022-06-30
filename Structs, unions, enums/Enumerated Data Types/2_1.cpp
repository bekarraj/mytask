#include <iostream>
using namespace std;

enum WEEK 
{ Sunday = 0, Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6};

int main()
{	
	 int DailyWeight[7];
	 	 
	 for(int i=Sunday;i<=Saturday;i++)
	 {
	 	cout<<"Enter your weight for day "<<i<<":";
	 	cin>>DailyWeight[i];
	 }
	 
	 cout<<"weight for tuesday is:"<<DailyWeight[Tuesday]<<endl;
	 cout<<"weight for thursday is:"<<DailyWeight[Thursday];
	 	 
	 return 0;
}

