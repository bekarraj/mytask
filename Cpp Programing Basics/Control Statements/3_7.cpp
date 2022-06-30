#include<iostream>
using namespace std;
int main()
{
	 int number,mod,sum=0;
	 
	 cout<<"Enter a number:";
	 cin>>number;
     
     if(number == 1 || number == 0)
     {
     	cout<<number<<" is neither prime nor composite"<<endl;
	 }
	 else 
   {
	 
       for(int i=1;i<=number;i++)
      {
     	 mod = number%i;
     	 if(mod==0)
     	 {
     	   sum++;	
		 }
	  }
	 
	   if(sum == 2)
	  {
	 	cout<<number<<" is a prime number"<<endl;
	  }
       else
      {
     	cout<<number<<" is not a prime number";
	  }
   }
   
	 return 0;
}
