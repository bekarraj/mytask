#include <iostream>
using namespace std;
int compare( char *X, char *Y)
{
    while (*X && *Y)
    {
        if (*X != *Y) {
            return 0;
        }
 
        X++;
        Y++;
    }
 
    return (*Y == '\0');
}
char* strstr(char* X,char* Y)
{
    while (*X != '\0')
    {
        if ((*X == *Y) && compare(X, Y)) {
            return Y;
        }
        X++;
    }
 
    return NULL;
}
int main()
{
    char X[100],Y[100];
    cout<<"Enter the first string : ";
    cin>>X;
    cout<<"Enter the Second string : ";
    cin>>Y;
    cout<<"Substrig Found: "<<strstr(X, Y);
    return 0;
}
