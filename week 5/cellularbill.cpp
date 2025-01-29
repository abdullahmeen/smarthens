#include <iostream>
using namespace std;
void cellularBill(char code, char time, int minutes);
int main()
{
    char mode, time;
    int min;
    cout << "Enter the service code(R/r for regular OR P/p for premium): ";
    cin >> mode;
    if (mode == 'p' || mode == 'P')
    {
        cout << "enter the time of call(D/d for day OR N/n for night): ";
        cin >> time;
    }

    cellularBill(mode, time, min);
    return 0;
}

void cellularBill(char code, char time, int minutes)
{

    float bill = 25.00;

    if (code == 'p' || code == 'P')
    {

        if (time == 'd' || time == 'D')
        {
            cout << "Ener the number of minutes used: ";
            cin >> minutes;
            if (minutes > 75)
            {
                cout << "service type: Premium\n";
                cout << "total minutes used:  " << minutes << " minutes\n";
                bill += (0.10 * (minutes - 75));
                cout << "\nAmount due: " << bill << "$";
            }
            else
            {
                cout << "total minutes used:  " << minutes << " minutes\n";
                cout << "\nAmuont due:  " << bill << "$";
            }
        }
        else if (time == 'n' || time == 'N')
        {
            cout << "Ener the number of minutes used: ";
            cin >> minutes;
            if (minutes > 100)
            {
                cout << "service type: Premium\n";
                cout << "total minutes used:  " << minutes << " minutes\n";
                bill =bill + (0.05 * (minutes - 100));
                cout << "Amount due: " << bill << "$";
            }
            else
            {
                cout << "total minutes used:  " << minutes << " minutes\n";
                cout << "Amount due:  " << bill << "$";
            }
        }
        else
            cout << "error invalid input";
    }
    else if (code == 'r' || code == 'R')
    {
        bill = 10.00;
        cout << "Ener the number of minutes used: ";
            cin >> minutes;
        cout << "service type: regular\n";
        if (minutes > 50)
        {

            cout << "total minutes used:  " << minutes << " minutes\n";
            bill += (0.20 * (minutes - 50));
            cout << "Amount due:  " << bill << "$";
        }
        else
        {
            cout << "total minutes used:  " << minutes << " minutes\n";
            cout << "Amount due:  " << bill << "$";
        }
    }
    else
        cout << "error invalid input";
}