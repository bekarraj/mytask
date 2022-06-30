#include<iostream>]
#define size 10
using namespace std;
int main()
{
	try
	{
		int A[size];
		for(int i=0;i<=9;i++)
		{
			cin>>A[i];
		}
		
		cout<<"Checking indexing"<<endl;
		for(int i=0;i>-1;i--)
		{
			cout<<A[i];
			
			if(i==-1 || i<-1)
			{
				throw " is out of bound ";
			}
		}
	}
	catch(const char* msg)
	{
		cout<<msg;
	}
}
