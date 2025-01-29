#include<iostream>
#include<string>
using namespace std;
string decideactivity(string temp, string humid);

int main()
{ 

    string temprature,humidity;
    cout<<"enter Temprature (warm or cold) : ";
    cin>>temprature;
    cout<<"Enter Humidity (dry or humid) : ";
    cin>>humidity;
    cout<<decideactivity(temprature,humidity);

  return 0;
}
string decideactivity(string temp, string humid)
{
    if(temp=="warm" && humid== "dry")
    return "recommended activity : play tennis";
    else 
    if(temp=="warm" && humid== "humid")
    return "recommended activity : swim";
    else 
    if(temp=="cold" && humid== "dry")
    return "recommended activity : play basketball";
    else 
    if(temp=="cold" && humid== "humid")
    return "recommended activity : watch TV";
    else
    return "Invalid choice";

    
    

}