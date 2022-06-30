#include<iostream>
using namespace std;

class BOOK
{
	private:
		
		int BOOK_NO , n ;
		char BOOKTITLE[20];
		float PRICE , total;
		
		void TOTAL_COST(int pr)
		{
	       total = PRICE * pr;
		}
	
	public:
		
		void INPUT()
		{
			cout<<"Enter the Book Number : ";
			cin>>BOOK_NO;
			cout<<"Enter the Book Title : ";
			cin>>BOOKTITLE;
			cout<<"Enter the Book Price : ";
			cin>>PRICE;
		}
		
		void PURCHASE()
		{
		  cout<<"Enter the number of Copies : ";
		  cin>>n;
		  TOTAL_COST(n);
		  cout<<"TOTAL PRICE IS : "<<total;	
		}
};

int main()
{
   BOOK B;
   B.INPUT();
   B.PURCHASE();
   return 0;
} 
