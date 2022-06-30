#include <iostream>
using namespace std;
int main()
{
   int student[10],array[10];
   int i, j, t;
   int *ptr;
   ptr=student;
   cout << "Enter marks: ";

   for(int i = 0; i < 10; ++i)
      cin >> student[i];   
    cout<<"\nTotal size allocated to array: "<<sizeof(student)<<endl;  
    for (i = 0; i < 10; i++) {
        
        for (j = i + 1; j < 10; j++) {
  
            if (*(ptr + j) < *(ptr + i)) {
  
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
        array[i]=*(ptr+i);
    }
    for (i = 0; i < 10; i++)
        printf("%d ",array[i]);

   return 0;
}
