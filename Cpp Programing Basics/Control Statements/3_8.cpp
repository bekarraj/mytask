#include<iostream>
using namespace std;
int main()
{
	 int number,rem,rev=0,n;
	 
	 cout<<"Enter a number:";
	 cin>>number;
     
     n=number;
     while(number>0)
     {
     	rem = number % 10;
     	rev = (rev * 10) + rem;
     	number = number / 10;
	 }
     
     if(rev==n)
     {
     	cout<<n<<" is a palindrome";
	 }
	 
	 else
	 {
	 	cout<<n<<" is not a palindrome";
	 }
   
	 return 0;
}
