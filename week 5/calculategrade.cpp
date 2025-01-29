#include<iostream>
using namespace std;
 //1st function takes all the marks and then return the average of the marks
 float calculateAverage(float marksEnglish, float marksMaths, float 
 marksChemistry, float marksSocialScience, float marksBiology); 
 //2nd function takes the average and then return the grade as string.
string calculateGrade(float average);
int main()
{
    string name;
    float mEng,mMath,mChem,mBio,mSS,avg;
    cout<<"Enter your Name: ";
    cin>>name;
    cout<<"Enter marks for English: ";
    cin>>mEng;
    cout<<"Enter marks for Maths:";
    cin>>mMath;
    cout<<"Enter marks for Social Sciences: ";
    cin>>mSS;
    cout<<"Enter marks for Biology: ";
    cin>>mBio;
    cout<<"Enter marks for Chemistry: ";
    cin>>mChem;
    cout<<"Student name: "<<name<<endl;
    avg=calculateAverage(mEng,mMath,mChem,mBio,mSS);
    cout<<"percentage: "<<avg<<"%"<<endl;
    cout<<"Grade: "<<calculateGrade(avg);


  return 0;
}
float calculateAverage(float marksEnglish, float marksMaths, float 
marksChemistry, float marksSocialScience, float marksBiology)
{
     
    return (marksBiology+marksChemistry+marksEnglish+marksMaths+marksSocialScience)/5.0;
}
string calculateGrade(float average)
{
    string grade;
  

    if (average >= 91 )
    grade= "A+";
    else
    if(average >= 81 && average<= 90)
    grade= "A";
    else
    if(average >= 71 && average<= 80)
    grade= "B+";
    else
    if(average >= 61 && average <= 70)
    grade= "B";
    else
    if(average >= 51 &&average <= 60)
    grade= "C";
    else
    if(average >= 40 && average <= 50)
    grade= "D";
    else
    grade = "F";

    return grade;


    
}