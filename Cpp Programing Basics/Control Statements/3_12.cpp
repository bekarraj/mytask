#include<iostream>
using namespace std;
int main()
{
	int row , j , i , space ;
	char c;
	cout<<"How many rows are to be printed :";
	cin>>row;
	cout<<"Enter the Character:";
	cin>>c;
	for(i=1;i<=row;++i)
	{
		for(space=1;space<=row-i;++space)
		{
		 cout<<" ";
       	}
		 for(j=0;j !=2*i-1;++j)
		 {
		 	cout<<c;
		 }
		 cout<<endl;
	
	}
	
	return 0;
}
