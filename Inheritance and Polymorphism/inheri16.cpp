/*******************************************************************************
16.Consider the following class hierarchy:
class A  {
  public:
   void display()  { cout << “A::display()"; }
   void display( int t) { cout << “A::display(int ) :  " << t << endl;  }
};

class D : public A{
 public:
   void display()  { cout << “D::display ()"; }
};
Given 
 D d; 
State whether the following statements are correct ? If incorrect, give reasons.
d.display();
d.display(10);
 
Ans:
class A  {
  public:
   void display()  { cout << “A::display()"; }
   void display( int t) { cout << “A::display(int ) :  " << t << endl;  }
};

class D : public A{
 public:
   void display()  { cout << “D::display ()"; }
};
int main(){
 D d; 
d.display();//this will display class d display method.
//d.display(10); this will exhibit an error because od ambiguity 
// to resolve this we need to mention class name before method name
d.A::display();//this will resolve that ambiguity problem.
*******************************************************************************/