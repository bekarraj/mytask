10.Consider the following  Base class definition:
/*******************************************************************************
class Base {
     public:
         Base(int i):prot(i) {  }
     protected:
         int prot;
  };

Which of the following constructors are not valid?
1. class Der1: public Base {
             Der1(int j): prot(j) {  }
 };

2. class Der2 : public Base {
 Der2(int k): Base(k){ }
};

3. class Der3: public Base {
 Der3() {}
};

Ans: option 2
2. class Der2 : public Base {
 Der2(int k): Base(k){ }
};
*******************************************************************************/