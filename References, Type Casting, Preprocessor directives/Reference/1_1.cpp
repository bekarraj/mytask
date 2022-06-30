#include<iostream>
using namespace std;

int factorial(int n);

int main() {

  int n;

  cout << "./a.out ";
  cin >> n;
  if(n>=0)
  cout<< factorial(n);
   else
   cout<<"Invalid Argument";
  return 0;
}

int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}
