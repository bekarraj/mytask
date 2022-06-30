#include <iostream>
using namespace std;

int checkidentical(char *str1, char *str2)
{
	int i=0,j=0,flag=0;
	 while(str1[i]!='\0')
      {
        i++;
      }
      while(str2[j]!='\0')
      {
        j++;
      }
     if(i!=j)
     {
        flag=0;
     }
     else
     {
         for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
         {
             if(str1[i]==str2[j])
             {
                flag=1;
             }
         }
     }
     if(flag==0)
     {
        return 0;
     }
     else
     {
        return 1;
     } 
}
 
int main()
{ 
	char str1[50],str2[50];
	int i;
	cout<<"Enter the first string: ";
	cin>>str1;
	cout<<"Enter the second string: ";
	cin>>str2;
  	i=checkidentical(str1,str2);
    cout<<i;
}
  


