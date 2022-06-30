 #include <iostream>
using namespace std;

int mystrcat(char *str1, char *str2, char *str3)
{
	int i=0,j=0;    
        while (str1[i] != '\0') 
	{
        str3[j] = str1[i];
        i++;
        j++;
    }
    i = 0;
    while (str2[i] != '\0') 
    {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
    cout<<str3;
}
 
int main()
{ 
	char str1[50],str2[50],str3[100];
	cout<<"Enter the first string: ";
	cin>>str1;
	cout<<"Enter the second string: ";
	cin>>str2;
  	mystrcat(str1,str2,str3);
    return 0;
}
  



