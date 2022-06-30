#include<iostream>
#include<string.h>
using namespace std;
class String
{
	char A[10];
	char b;
	public:
		
	    operator [ ](int i)
		{
		     
		    b = A[i];
			if(i>9 || i<0)
			{
				throw "OUT OF BOUND CHARARCTERS";
			}			
		}
		
		String(string K)
		{
			K.copy(A,sizeof K);
		}
		
		void display()
		{
			cout<<"Character is :"<<b<<endl;
		}
};

int main()
{
	 try
	{
	 
	String s("HELLOWIP");
	s[5];
	s.display();
	
	String s1("HELLOWIP");
	s1[10];
	s1.display();
	}
	catch (const char* msg) 
	{
     cout << msg << endl;
    }
    
	return 0;
}
