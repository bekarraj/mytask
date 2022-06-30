#include<iostream>
using namespace std;

class student
{ 
   private:
   	
   	int admno;
   	char sname[20];
   	float eng,math,science,total;
   	
   	float ctotal()
   	{
   	   	total = eng + math + science;
	}
	
	public:
	
	void Readdata()
	{
		cout<<"Enter student name:";
		cin>>sname;
		cout<<"Enter student number:";
		cin>>admno;
		cout<<"Enter the number in English:";
		cin>>eng;
		cout<<"Enter the number in Maths:";
		cin>>math;
		cout<<"Enter the number in science:";
		cin>>science;
		cout<<endl;
		ctotal();
	}
	
	void Displaydata()
	{
		cout<<"Student name : "<<sname<<endl;
		cout<<"Student number : "<<admno<<endl;
		cout<<"Number in English : "<<eng<<endl;
		cout<<"Number in Maths : "<<math<<endl;
		cout<<"Number in science : "<<science<<endl;
		cout<<"Total marks is : "<<total;
	}
		
};

int main()
{
	student s;
	s.Readdata();
	s.Displaydata();
	return 0;
}
