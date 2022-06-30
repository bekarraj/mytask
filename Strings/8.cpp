#include <iostream>
using namespace std;

int mystrrev(char *str1, char *str2)
{
	int i=0,j=0,k=0;
    while (str1[k])
    {
        k++;
    }
         for(i=k-1;i>=0;i--)
         {
            str2[j] = str1[i];
            j++;
        }
		str2[j] = '\0';
        cout<<str2;
}
 
int main()
{ 
	char str1[50],str2[50];
	cout<<"Enter the first string: ";
	cin>>str1;
   	mystrrev(str1,str2);

}
 


