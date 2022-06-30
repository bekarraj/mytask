/*******************************************************************************
15.Consider the following:
class A  {
 public: 
  void display(){  cout << “A::display” ;  } };

class D : public A {
 public:
  void display(){  cout << “D::display” ;  } };

Given 
 D d; 

Does the following statement invoke A::display() ? If not, what changes should be made to invoke A::display ?
d.display();

Ans:
class A  {
 public: 
  void display(){  cout << "A::display" ;  } };

class D : public A {
 public:
  void display(){  cout << "D::display" ;  } };

int main()
{ D d;
d.A::display(); //to resolve ambiguity we need to mention class name 
//before method name.

*******************************************************************************/