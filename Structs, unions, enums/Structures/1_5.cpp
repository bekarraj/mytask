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
     struct EMP *eptr, e1;
     eptr = &e1;
     
     cout<<"Enter Employee name:";
     cin>>(*eptr).emp_name;
     cout<<"Enter Employee id:";
     cin>>(*eptr).emp_id;
     cout<<"Enter Employee age:";
     cin>>(*eptr).emp_age;
     cout<<"Enter Employee salary:";
     cin>>(*eptr).emp_salary;
     cout<<endl;
     
     cout<<"Employee name:"<<(*eptr).emp_name<<endl;
     cout<<"Employee id:"<<(*eptr).emp_id<<endl;
     cout<<"Employee age:"<<(*eptr).emp_age<<endl;
     cout<<"Employee salary:"<<(*eptr).emp_salary<<endl;
     
   return 0;
}
