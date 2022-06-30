#include<iostream>
using namespace std;
class Vector
{
	int a,b;
	int div;
	public:
		operator /(Vector v)
		{
			if(b==0)
			{
				throw "Division by zero condition!";
			}
		   div = a / b;	
		}
		Vector(int k,int l)
		{
			 a = k;
			 b = l;
		}
		void display()
		{
			cout<<"disvison is :"<<div<<endl;
		}
};

int main()
{
	 try
 {
	 
	Vector v(10,5);
	v /(v);
		v.display();
		
			Vector v1(10,0);
	v1 /(v1);
		v1.display();
}
	catch (const char* msg) 
	{
     cout << msg << endl;
   }
	return 0;

}
