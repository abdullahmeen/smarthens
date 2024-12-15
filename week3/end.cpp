#include<iostream>
#include <string>
using namespace std;


void  stringend(string name);
int main()
{
    string nam;
   stringend(nam);
      
  return 0;
}

void stringend(string name)
{
      name="abd";
      while(name != "end")
    {
        cout<<"enter a name( type end to stop)"<<endl;
        cin>>name;
        if(name != "end")
        cout<<"hello   "<<name<<endl;
    
    }
      cout<<name;
     
}