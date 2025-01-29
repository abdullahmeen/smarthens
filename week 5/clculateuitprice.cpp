#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit, string dayOfWeek, double
quantity);
int main()
{
    string  fruitname,day;
    double number;
    cout<<"enter fruit name: ";
    cin>>fruitname;
    cout<<"enter the day of week: ";
    cin>>day;
    cout<<"enter the quantity: ";
    cin>>number;
  return 0;
}

float calculateFruitPrice(string fruit, string dayOfWeek, double
quantity)
{
    float price;
    if(fruit=="banana")
    {
        price=2.50;
        if(dayOfWeek=="Monday"||dayOfWeek=="Tuesday" ||dayOfWeek=="Wednesday" ||dayOfWeek=="Thursday" ||dayOfWeek=="Friday")
        price=price*quantity;
    }
    else  if(fruit=="apple")
    {
        price=1.20;
        if(dayOfWeek=="Monday"||dayOfWeek=="Tuesday" ||dayOfWeek=="Wednesday" ||dayOfWeek=="Thursday" ||dayOfWeek=="Friday")
        price=price*quantity;
    }
    else  if(fruit=="orange")
    {
        price=0.85;
        if(dayOfWeek=="Monday"||dayOfWeek=="Tuesday" ||dayOfWeek=="Wednesday" ||dayOfWeek=="Thursday" ||dayOfWeek=="Friday")
        price=price*quantity;
    }
    else  if(fruit=="grapefruit")
    {
        price=1.45;
        if(dayOfWeek=="Monday"||dayOfWeek=="Tuesday" ||dayOfWeek=="Wednesday" ||dayOfWeek=="Thursday" ||dayOfWeek=="Friday")
        price=price*quantity;
    }
    else  if(fruit=="kiwi")
    {
        price=2.70;
        if(dayOfWeek=="Monday"||dayOfWeek=="Tuesday" ||dayOfWeek=="Wednesday" ||dayOfWeek=="Thursday" ||dayOfWeek=="Friday")
        price=price*quantity;
    }
    else  if(fruit=="pineapple")
    {
        price=5.50;
        if(dayOfWeek=="Monday"||dayOfWeek=="Tuesday" ||dayOfWeek=="Wednesday" ||dayOfWeek=="Thursday" ||dayOfWeek=="Friday")
        price=price*quantity;
    }
    else  if(fruit=="grapes")
    {
        price=3.85;
        if(dayOfWeek=="Monday"||dayOfWeek=="Tuesday" ||dayOfWeek=="Wednesday" ||dayOfWeek=="Thursday" ||dayOfWeek=="Friday")
        price=price*quantity;
    }
    //weekends
    else  if(fruit=="grapes")
    {
        price=3.85;
        if(dayOfWeek=="Saturday"||dayOfWeek=="Sunday")
        price=price*quantity;
    }
    else  if(fruit=="grapes")
    {
        price=3.85;
        if(dayOfWeek=="Saturday"||dayOfWeek=="Sunday")
        price=price*quantity;
    }
    else  if(fruit=="grapes")
    {
        price=3.85;
        if(dayOfWeek=="Saturday"||dayOfWeek=="Sunday")
        price=price*quantity;
    }
    else  if(fruit=="grapes")
    {
        price=3.85;
        if(dayOfWeek=="Saturday"||dayOfWeek=="Sunday")
        price=price*quantity;
    }
    else  if(fruit=="grapes")
    {
        price=3.85;
        if(dayOfWeek=="Saturday"||dayOfWeek=="Sunday")
        price=price*quantity;
    }
    else  if(fruit=="grapes")
    {
        price=3.85;
        if(dayOfWeek=="Saturday"||dayOfWeek=="Sunday")
        price=price*quantity;
    }
    
  

}