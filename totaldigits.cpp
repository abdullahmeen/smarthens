#include<iostream>
using namespace std;
void totaldigits(int num,int count);
int main()
{
    int n,c;
   totaldigits(n,c);
  return 0;
}
void totaldigits(int num,int count)
{
     count=0;
    cout<<"enter a num : ";
    cin>>num;
    while(num!=0)
    {
         num = num/10.0;
         count ++;

    }
    cout<<"total digits = "<<count;
}