#include<iostream>
using namespace std;
void table(int n );
int main()
{
    int n;
    table(n);
  return 0;
}
void table(int n)
{
    cout<<"Enter  a Number : ";
    cin>>n;
    for (int i = 0; i <= 10; i++)
    {
           cout<<n<<" x "<<i<<" = "<<n*i<<endl;   
    }
    
}