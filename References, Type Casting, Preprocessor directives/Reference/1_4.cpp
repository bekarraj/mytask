#include <iostream>
using namespace std;

int GetVowelCount(char str[30]){
    int vowels = 0;
    for(int i = 0; str[i]; i++)  
    {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
        ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
        {
		    vowels++;
        }
    }
    return vowels;
    
}

int main() {
    int n;
    while(1){
        char str[30];
        cout<<"\nEnter the word: ";
        cin >> str;
        n=GetVowelCount(str);
        if(n>=3)
        {
            cout<<"\n"<<str<<" --- "<<n;
        }
        else
        {
            cout<<"\n"<<str;
        }
        
    }
    
	return 0;
}
