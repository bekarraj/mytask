#include <iostream>
#include <cstring>
using namespace std;

struct s_memo
{
  int nVal;
  char cVal;
};

union u_memo
{
	int nVal;
	char cVal;
};

int main() 
{	 
    struct s_memo S;
    union u_memo U;
    
    cout<<"***Enter the data in struct***"<<endl;
    cout<<"Enter the int value:";
    cin>>S.nVal;
    cout<<"Enter the char value:";
    cin>>S.cVal;
    cout<<endl;
    
    cout<<"***Enter the data in union***"<<endl;
    cout<<"Enter the int value:";
    cin>>U.nVal;
    cout<<"Enter the char value:";
    cin>>U.cVal;
    cout<<endl;
    
    cout<<"***Struct data***"<<endl;
    cout<<"int value:"<<S.nVal<<endl;
    cout<<"char value:"<<S.cVal<<endl;
    cout<<endl;
    
    cout<<"***Union data***"<<endl;
    cout<<"int value:"<<U.nVal<<endl;
    cout<<"char vlaue:"<<U.cVal<<endl;
    cout<<endl;
    
    cout<<"Size of struct is : "<<sizeof(struct s_memo)<<endl;	
	cout<<"Size of union is : "<<sizeof(union u_memo); 
	
   return 0;
}


