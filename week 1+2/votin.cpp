#include<iostream>
using namespace std;
void vote(int n);
int main()
{
    int age;
    cout<<"enter age: ";
    cin>>age;
    vote(age);
  return 0;
}
void vote(int n)
{
    if(n >= 18)
    cout <<"you are elligible to vote";
    else
    cout<<"you are not elligible to vote make nic";

}