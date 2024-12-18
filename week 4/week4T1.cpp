#include <iostream>
#include <string>
using namespace std;
int main()
{
    string output_unit;
    double length, width,volume, height;
    cout<<"enter the length of pyramid(meters) :";
    cin>>length;
    cout<<"enter the width of pyramid(meters) :";
    cin>>width;
    cout<<"enter the height of pyramid(meters) :";
    cin>>height;
    cout<<"enter the  desired output unit(millimeters,centimeters,meters,kilometers ) :";
    cin>>output_unit;
    if(output_unit=="centimeters")
    {
        length=length*100.0000;
        width=width*100.0000;
        height=height*100.0000;
        volume=(1/3.0000)*(length*width*height);
        cout<<volume<<"  cubic centimeters";
    }
   else if(output_unit=="millimeters")
    {
        length=length*1000.0000;
        width=width*1000.0000;
        height=height*1000.0000;
        volume=(1/3.0000)*(length*width*height);
        cout<<volume<<"  cubic millimeters";
    }
    else if(output_unit=="meters")
    {
       
        volume=(1/3.0000)*(length*width*height);
        cout<<volume<<"  cubic meters";
    }
    else if(output_unit=="kilometers")
    {
        length=length/1000.0000;
        width=width/1000.0000;
        height=height/1000.0000;
        volume=(1/3.0000)*(length*width*height);
        cout<<volume<<"  cubic kilometers";
    }
    else 
    cout<<"invalid input";
      return 0;
}