
#include <iostream>

using namespace std;

struct student
{
  char student_name[50];
  int student_rollno;
  int marks1;;
  int marks2;
  int marks3;

};
int
main ()
{
  int highest, least;
  float avg[10];
  student s1, s2, s3, s4, s5;
  cout << "enter the names of 5 students :" << endl;
  cin >> s1.student_name >> s2.student_name >> s3.
    student_name >> s4.student_name >> s5.student_name;
  cout << "\n" << "enter the roll numbers of 5 students :" << endl;
  cin >> s1.student_rollno >> s2.student_rollno >> s3.
    student_rollno >> s4.student_rollno >> s5.student_rollno;
  cout << "\n" << "enter the marks1 of 5 students :" << endl;
  cin >> s1.marks1 >> s2.marks1 >> s3.marks1 >> s4.marks1 >> s5.marks1;
  cout << "\n" << "enter the marks2 of 5 students :" << endl;
  cin >> s1.marks2 >> s2.marks2 >> s3.marks2 >> s4.marks2 >> s5.marks2;
  cout << "\n" << "enter the marks3 of 5 students :" << endl;
  cin >> s1.marks3 >> s2.marks3 >> s3.marks3 >> s4.marks3 >> s5.marks3;
  avg[0] = ((s1.marks1 + s1.marks2 + s1.marks3) / 3);
  cout << "avg marks of " << s1.student_name << "is: " << avg[0] << endl;
  avg[1] = ((s2.marks1 + s2.marks2 + s2.marks3) / 3);
  cout << "avg marks of " << s2.student_name << "is: " << avg[1] << endl;
  avg[2] = ((s3.marks1 + s3.marks2 + s3.marks3) / 3);
  cout << "avg marks of " << s3.student_name << "is: " << avg[2] << endl;
  avg[3] = ((s4.marks1 + s4.marks2 + s4.marks3) / 3);
  cout << "avg marks of " << s4.student_name << "is: " << avg[3] << endl;
  avg[4] = ((s5.marks1 + s5.marks2 + s5.marks3) / 3);
  cout << "avg marks of " << s3.student_name << "is: " << avg[4] << endl;




  for (int i = 0; i < 5; i++)
    {
      if (avg[i] > avg[4])
	{
	  highest = avg[i];
	  if (highest == avg[0])
	    {
	      cout << "highest avg gained student is :" << s1.student_name <<
		endl;
	    }
	  else if (highest == avg[1])
	    {
	      cout << "highest avg gained student is :" << s2.student_name <<
		endl;
	    }
	  else if (highest == avg[2])
	    {
	      cout << "highest avg gained student is :" << s3.student_name <<
		endl;
	    }

	  else if (highest == avg[3])
	    {
	      cout << "highest avg gained student is :" << s4.student_name <<
		endl;
	    }
	  else if (highest == avg[4])
	    {
	      cout << "highest avg gained student is :" << s5.student_name <<
		endl;
	    }
	}
      if (avg[i] < avg[0])
	{
	  least = avg[i];
	  if (least == avg[0])
	    {
	      cout << "least avg gained student is :" << s1.student_name <<
		endl;
	    }
	  else if (least == avg[1])
	    {
	      cout << "least avg gained student is :" << s2.student_name <<
		endl;
	    }
	  else if (least == avg[2])
	    {
	      cout << "least avg gained student is :" << s3.student_name <<
		endl;
	    }

	  else if (least == avg[3])
	    {
	      cout << "least avg gained student is :" << s4.student_name <<
		endl;
	    }
	  else if (least == avg[4])
	    {
	      cout << "least avg gained student is :" << s5.student_name <<
		endl;
	    }
	}
    }




  return 0;
}
