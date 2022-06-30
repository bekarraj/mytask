#include <iostream>
#include <cstring>
 
using namespace std;
  
struct EMP {
   char  emp_name[100];
   int   emp_id;
   int   emp_age;
   float emp_salary;
};


int main() 
{           
     EMP *e1 = new EMP;
     EMP *e2 = new EMP;
     EMP *e3 = new EMP;
     
     cout<<"***Enter the Employee data***";
     cout<<"\nEnter Employee name:";
     cin>>(*e1).emp_name;
     cout<<"Enter Employee id:";
     cin>>(*e1).emp_id;
     cout<<"Enter Employee age:";
     cin>>(*e1).emp_age;
     cout<<"Enter Employee salary:";
     cin>>(*e1).emp_salary;
     cout<<endl;
     
     cout<<"Enter Employee name:";
     cin>>(*e2).emp_name;
     cout<<"Enter Employee id:";
     cin>>(*e2).emp_id;
     cout<<"Enter Employee age:";
     cin>>(*e2).emp_age;
     cout<<"Enter Employee salary:";
     cin>>(*e2).emp_salary;
     cout<<endl;
	      
     cout<<"Enter Employee name:";
     cin>>(*e3).emp_name;
     cout<<"Enter Employee id:";
     cin>>(*e3).emp_id;
     cout<<"Enter Employee age:";
     cin>>(*e3).emp_age;
     cout<<"Enter Employee salary:";
     cin>>(*e3).emp_salary;
     cout<<endl;
     
     cout<<"***Employee Data***";
     cout<<"\nEmployee name:"<<(*e1).emp_name<<endl;
     cout<<"Employee id:"<<(*e1).emp_id<<endl;
     cout<<"Employee age:"<<(*e1).emp_age<<endl;
     cout<<"Employee salary:"<<(*e1).emp_salary<<endl;
     cout<<endl;
     
     cout<<"Employee name:"<<(*e2).emp_name<<endl;
     cout<<"Employee id:"<<(*e2).emp_id<<endl;
     cout<<"Employee age:"<<(*e2).emp_age<<endl;
     cout<<"Employee salary:"<<(*e2).emp_salary<<endl;
     cout<<endl;
     
     cout<<"Employee name:"<<(*e3).emp_name<<endl;
     cout<<"Employee id:"<<(*e3).emp_id<<endl;
     cout<<"Employee age:"<<(*e3).emp_age<<endl;
     cout<<"Employee salary:"<<(*e3).emp_salary<<endl;
          
     return 0;
}
