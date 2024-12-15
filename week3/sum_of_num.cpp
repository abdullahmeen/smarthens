#include<iostream>
using namespace std;
void digitsum(int num,int sum,int digit);
int main()
{
    int n,s,d;
    digitsum(s,n,d);
  return 0;
}
void digitsum(int num,int sum,int digit)
{
    sum=0;
    cout<<"entre a num : ";
    cin>>num;
    while(num!=0)
    {
        digit=num%10;
        sum=digit+sum;
        num=num/10.0;
        

    }    
    cout<<"sum = "<<sum;
}