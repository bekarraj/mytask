#include <iostream>
#include <cstring>
 
using namespace std;

  void printData( struct BATSMAN bat[3]);
  
struct BATSMAN {
   char  name[100];
   int   age;
   int   highest_score;
   int   least_score;
   int   no_of_ducks;
};


int main() 
{     
     struct  BATSMAN bat[3];
     int i;
     
	 for(i=0; i<=2; i++)
	 {                   		               //taking values from user
		cout << " BATSMAN " << i + 1 << endl;
		cout << "Enter name:";
		cin  >> bat[i].name;
		cout << "Enter Age:";
		cin  >> bat[i].age;
		cout << "Enter highest score:";
		cin  >> bat[i].highest_score;
		cout << "Enter least score:";
		cin  >> bat[i].least_score;
		cout << "Enter number of ducks:";
		cin  >> bat[i].no_of_ducks;
		cout<<endl;
	}
	
    printData(bat);
	 
   return 0;
}

void printData( struct BATSMAN bat[3])
{
	 for(int i=0; i<=2; i++)
	 {                   	                 	//printing values from user
		cout << "\n BATSMAN " << i + 1 << endl;
		cout << "Name: "<<bat[i].name<<endl;
		cout << "Age: "<<bat[i].age<<endl;
		cout << "Highest score: "<<bat[i].highest_score<<endl;
		cout << "Least score: "<<bat[i].least_score<<endl;
		cout << "Number of ducks:"<<bat[i].no_of_ducks;
		cout<<endl;
	}
}


