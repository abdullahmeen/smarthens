#include<iostream>

using namespace std;
int negative(int n,int sum);
int main()
{
    int n,sum;
    cout<<negative(n,sum);
  return 0;
}
int negative(int n,int sum)
{
    sum =0;
    n=1;
    while(n>0)
    {
        cout<<"enter a number(less than 0 to exit)"<<endl;
        cin>>n;
        if(n>0)
        sum=sum + n;

    }
    cout<<"total sum";
    return sum;
}