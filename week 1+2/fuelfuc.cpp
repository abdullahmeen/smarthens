#include<iostream>
using namespace std;

float dis(float distance);

int main()
{
    float distance,fuel;
    cout<<"enter distance: ";
    cin>>distance;
    fuel=dis(distance);
    cout<<"fuel consumption : "<<fuel;
    
  return 0;
}
float dis(float distance)
{

    return(distance*10);
}