#include<iostream>
using namespace std;

float calculator(float num1,float num2,char chr);

int main()
{
    float no1,no2,result;
    char ch;
    cout<<"enter number 1 :";
    cin>>no1;
    cout<<"enter number 2 :";
    cin>>no2;
    cout<<"Choose any operation('+','-','*','/')\n";
    cin>>ch;
   calculator(no1,no2,ch);
   
  return 0;
}
float calculator(float num1,float num2,char chr)
{
    if(chr == '+')
    {
        return num1+num2;
    }
    else if(chr == '-')
    {
       return num1-num2;
    }
    else if(chr == '*')
    {
       return num1*num2;
    }
    else if(chr == '/' && num1 !=0)
    {
            
       return num1/num2;
       
    }
    else
    cout<<"invalid choice";
    return 0;
}