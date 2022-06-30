#include<iostream>
#include<fstream>

using namespace std;
int main ()
 {
 	try
 	{
   char fname[10],text[20];
 
   ofstream outfile;
   outfile.open("afile.dat");
   if(!outfile.fail())
   {
   	throw "File not open ";
   }

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(fname, 10);
   outfile << fname << endl;

  cout << "Enter your text: "; 
   cin.getline(text, 10);
   outfile << text << endl;

    outfile.close();
}

catch(const char* msg)
	{
		cout<<msg;
	}
	
   return 0;
}
