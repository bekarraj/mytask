#include <iostream>
#include <list>
#include <set>
#include <cstring>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n;
    cin>>n;
    list <string> li;
    int len1=s.length(); 
    if(n>0 && n<len1)
    {
    for(int i=0;i<s.length()-(n-1);i++)
    {
        li.push_back(s.substr(i,n));
    }
    list<string>::iterator itr;
    set <string> li1;
    set<string>::iterator itr1;
   
    for(itr=li.begin();itr!=li.end();itr++)
    {
      li1.insert(*itr);
    }
    int len=li1.size();
    int a[len];
    int count;
    int i;
    for(i=0,itr1=li1.begin();i<len&&itr1!=li1.end();i++,itr1++)
    {
        count=0;
        for(itr=li.begin();itr!=li.end();itr++)
        {
            if(*itr1==*itr)
            {
                count++;
            }
        }
        a[i]=count;
    }
    int max=a[0];
    for(int j=0;j<len;j++)
    {
       if(max<a[j])
       {
           max=a[j];
       }
    }
    list<string> li2;
    for(i=0,itr1=li1.begin();i<len&&itr1!=li1.end();i++,itr1++)
    {
        if(a[i]==max)
        {
            li2.push_back(*itr1);
        }
    }
    list<string>::iterator itr2;
    int k=0;
    for(itr2=li2.begin();itr2!=li2.end();itr2++)
    {
        cout<<*itr2;
        if(k!=(li2.size()-1))
            {
                cout<<":";
            }
            k++;
    }
    }
    else if(n==len1)
    {
        cout<<s<<endl;
    }
    else
    {
        cout<<"invalid length of substring"<<endl;
    }
}