#include<iostream>
using namespace std;
int largestno(int n);
int main()
{
    int num,lar;
    
    lar=largestno(num);
    cout<<"largest no is  "<<lar;
    return 0;
}
int largestno(int n)
{
  int largest=0;
 
  
 
  while (true)
  {
    cout<<"enter a num (-1 to exit) ";
    cin>>n;
    if (n == -1)
      break;
    if (n>largest)
      largest=n;

  }
  
  return largest;
}