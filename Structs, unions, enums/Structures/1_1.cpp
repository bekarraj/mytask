#include <iostream>
#include <cstring>
 
using namespace std;
 
struct EMP {
   char  emp_name[50];
   int   emp_id;
   int   emp_age;
   float emp_salary;
};
 
int main() 
{
	 char ename1[20],ename2[20],ename3[20];
	 int id1,id2,id3,age1,age2,age3;
	 float sal1,sal2,sal3;
	 
   struct EMP e1;        // Declare 1st instance
   struct EMP e2;        // Declare 2nd instance
   struct EMP e3;       // Declare 3rd instance
 
    cout<<"***DATA FOR e1***";
    cout<<"\nEnter the Employee name:";
    cin>>ename1;
    cout<<"Enter the Employee ID:";
    cin>>id1;
    cout<<"Enter the Employee age:";
    cin>>age1;
    cout<<"Enter the Employee salary:";
    cin>>sal1;
    cout<<endl;
    
    cout<<"***DATA FOR e2***";
    cout<<"\nEnter the Employee name:";
    cin>>ename2;
    cout<<"Enter the Employee ID:";
    cin>>id2;
    cout<<"Enter the Employee age:";
    cin>>age2;
    cout<<"Enter the Employee salary:";
    cin>>sal2;
    cout<<endl;
    
    cout<<"***DATA FOR e3***";
    cout<<"\nEnter the Employee name:";
    cin>>ename3;
    cout<<"Enter the Employee ID:";
    cin>>id3;
    cout<<"Enter the Employee age:";
    cin>>age3;
    cout<<"Enter the Employee salary:";
    cin>>sal3;
    cout<<endl;
    
   strcpy( e1.emp_name, ename1);
   e1.emp_id = id1;
   e1.emp_age = age1;
   e1.emp_salary = sal1;
  
   cout << "e1 Employee name : " << e1.emp_name<<endl;
   cout << "e1 Employee ID: " << e1.emp_id<<endl;
   cout << "e1 Employee Age : " << e1.emp_age<<endl;
   cout << "e1 Employee Salary : " << e1.emp_salary<<endl;
   cout<<endl;
   
   strcpy( e2.emp_name, ename2);
   e2.emp_id = id2;
   e2.emp_age = age2;
   e2.emp_salary = sal2;
  
   cout << "e2 Employee name : " << e2.emp_name<<endl;
   cout << "e2 Employee ID: " << e2.emp_id<<endl;
   cout << "e2 Employee Age : " << e2.emp_age<<endl;
   cout << "e2 Employee Salary : " << e2.emp_salary<<endl;
   cout<<endl;
   
   strcpy( e3.emp_name, ename3);
   e3.emp_id = id3;
   e3.emp_age = age3;
   e3.emp_salary = sal3;
  
   cout << "e3 Employee name : " << e3.emp_name<<endl;
   cout << "e3 Employee ID: " << e3.emp_id<<endl;
   cout << "e3 Employee Age : " << e3.emp_age<<endl;
   cout << "e3 Employee Salary : " << e3.emp_salary<<endl;
   cout<<endl;
   
     if(sizeof(struct EMP) == sizeof(e1) && sizeof(struct EMP) == sizeof(e2) && sizeof(struct EMP) == sizeof(e3))
   {
     cout << "Size of Struct :" << sizeof(struct EMP)<<endl;
     cout << "Size of Struct is correct";
   }
   else
   {
     cout<<"Size is not Correct";
   }
   
   return 0;
}
