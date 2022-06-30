#include <stdio.h>
#include<iostream>
using namespace std;


main ()
{
  int a;
  cout << "enter the no. of rows: ";
  cin >> a;
  cout << "enter the no. of columns: ";
  int b;
  cin >> b;
  int* s = new int[a * b];
  int i, j;
  cout << "enter the elements of matrix: ";
  //input
  for (i = 0; i < a; i++)
    {
      for (j = 0; j < b; j++)
	{

	  cin >> *(s + i*b + j);
	}
    }

  //print
  cout << "entered matrix is:\n";
  for (i = 0; i < a; i++)
    {
      for (j = 0; j < b; j++)
	{
	  cout << *(s + i*b + j) << " ";
	}
      cout << endl;
    }
    delete[] s;
 
    return 0;
}
