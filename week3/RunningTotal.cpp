#include<iostream>

using namespace std;
int runningtotal(int n,int sum,int getnum);
int main()
{  int sum,n,getnum;

    cout<< runningtotal(n,getnum,sum);
  return 0;
}
int runningtotal(int n,int sum,int getnum)
{
    sum=0;
    n=1;
    while(n<=5)
    {
        cout<<"enter number"<<n<<":";
        cin>>getnum;
        sum= sum+getnum;
        n++;
    }
    cout<<"total sum = ";
    return sum;
}