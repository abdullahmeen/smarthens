#include<iostream>

using namespace std;
int stickers(int x);

int main()
{   int n;

   cout<<"enter  nmber of stickers "<<endl;
   cin>>n;
   cout<<"number of stickers are "<<stickers(n);
  return 0;
}
int stickers(int x)
{
   return x*x*6;
}