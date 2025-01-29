// Program to display an Astrological sign or a Zodiac sign for a given date of birth.

#include <iostream>
#include <string>
using namespace std;
string findZodiacSign(int day, string month);
int main()
{
    int day;
    string month;
    cout << "Enter the date of birth : ";
    cin >> day;
    cout << "Enter the month(e.g.,January, February) : ";
    cin >> month;
    cout << "Zodiac sign : " << findZodiacSign(day, month);

    return 0;
}
string findZodiacSign(int day, string month)
{
    if ((month == "March" && day >= 21) || (month == "April" && day <= 19)) // 1
        return "Aries";

    else if ((month == "April" || month == "april" && day >= 20) || (month == "May" || month == "may" && day <= 20)) // 2
        return "Tauras";
    else if ((month == "May" || month == "may" && day >= 21) || (month == "June" || month == "june" && day <= 20)) // 3
        return "Gemini";
    else if ((month == "june" || month == "June" && day >= 21) || (month == "July" || month == "july" && day <= 22)) // 4
        return "Cancer";
    else if ((month == "July" || month == "July" && day >= 23) || (month == "August" || month == "august" && day <= 22)) // 5
        return "Leo";
    else if ((month == "August" || month == "august" && day >= 23) || (month == "September" || month == "september" && day <= 22)) // 6
        return "Virgo";
    else if ((month == "September" || month == "september" && day >= 23) || (month == "October" || month == "october" && day <= 22))  // 7
        return "Libra";
    else if ((month == "October" || month == "october" && day >= 23) || (month == "November" || month == "november" && day <= 21))    //  8
        return "Scorpio";
    else if ((month == "November" || month == "november" && day >= 22) || (month == "December" || month == "december"&& day <= 21))  // 9
        return "Sagittarius";
    else if ((month == "December"||month == "december" && day >= 22) || (month == "January" || month == "january" && day <= 19))  // 10
        return "Capricorn";
    else if ((month == "January" || month == "january" && day >= 20) || (month == "Februay" ||month == "februay" && day <= 18))  // 11
        return "Aquarius";
    else if ((month == "Februay"||month == "februay" && day >= 19) || (month == "March"|| month == "march" && day <= 20))  // 12
        return "Pisces";
    else
        return "invalid Input!!";
}