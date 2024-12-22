// program to calculate the tax on a vehicle

#include <iostream>
#include <iomanip>
using namespace std;

float taxcalculator(char v_type, float v_price);

int main()
{
    char type;
    float price, total;
    cout << "Enter the vehicle type code(M, E, S, V, T) ";
    cin >> type;
    cout << "Enter the price of the  Vehicle : $";
    cin >> price;
    total = taxcalculator(type, price);
    cout << "the final price of the Vehicle type " << type << " after adding the tax amount is $";
    cout << fixed << setprecision(4)<< total ;

    return 0;
}

float taxcalculator(char v_type, float v_price)
{
    float tax, f_price;
    if (v_type == 'M')
    {
        tax = v_price * (6 / 100.0);

        return tax + v_price;
    }
    else if (v_type == 'E')
    {
        tax = v_price * (8 / 100.0);
        f_price = tax + v_price;
        return f_price;
    }
    else if (v_type == 'S')
    {
        tax = v_price * (10 / 100.0);
        f_price = tax + v_price;
        return f_price;
    }
    else if (v_type == 'V')
    {
        tax = v_price * (12 / 100.0);
        f_price = tax + v_price;
        return f_price;
    }
    else if (v_type == 'T')
    {
        tax = v_price * (15 / 100.0);
        f_price = tax + v_price;
        return f_price;
    }
    else
    {
        cout << "Invalid choice";
        return 0;
    }
}