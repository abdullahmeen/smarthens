#include <iostream>
#include <conio.h>
using namespace std;

/*
1. menu
2. user registration (sign up)
3. user login (sign in)
4. Exit
5. input validation
*/

string emails[100], passwords[100];
int totalUsers = 0;

void Menu();
void signUp(string email, string password);
bool signIn(string email, string password);
bool isUserPresent(string email);
bool isuseradmin(string  email, string password);
void adminMenu();
void userMenu();


int main()
{
    cout << "Welcome to the Abdullah's Hotel<3\nPlease Sign Up if you are a new user OR Sign In(Existing User /Admin)" << endl;

    int choice;
    do
    {
        Menu();
        cin >> choice;

        string email, password;
        switch (choice)
        {
        case 1:
            // Sign Up
            cout << "Sign Up" << endl;
            cout << "Enter your email: ";
            cin >> email;
            cout << "Enter your password: ";
            cin >> password;
           
            if(isUserPresent(email))
            {
                cout << "User already exists" << endl;
                break;
            }
            else
            {
                signUp(email, password);
            }
            break;
        case 2:
            // Sign In
            cout << "Sign In" << endl;
            cout << "Enter your email: ";
            cin >> email;
            cout << "Enter your password: ";
            cin >> password;
           
            
            signIn(email, password);
           
            choice = 3;  // Exit after sign in
            break;
        case 3:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
        getch();
        system("cls");
    } while(choice != 3);

    return 0;
}

void signUp(string email, string password)
{
    emails[totalUsers] = email;
    passwords[totalUsers] = password;
    totalUsers++;
}

bool signIn(string email, string password)
{    
    if (email=="admin" && password=="1234")
    {
        
        isuseradmin(email, password);
        return true;
    }
    for (int i = 0; i < totalUsers; i++)
    {
        
        if (emails[i] == email)
        {
            if (passwords[i] == password)
            {
                cout << "Welcome " << emails[i] << endl;
                userMenu();
                return true;
            }
        }
       
    }
    cout << "Invalid email or password" << endl;
    return false;
}
        
bool isUserPresent(string email)
{
    
    for (int i = 0; i < totalUsers; i++)
    {
        if (emails[i] == email)
        {
            return true;
        } 
    }
    return false;
}

void Menu()
{
    cout << "1. Sign Up" << endl;
    cout << "2. Sign In" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
}

bool isuseradmin(string  email, string password)
{
     
    adminMenu();   
        return true;
}
//admin menu
void adminMenu()
{
    system("cls");
     cout<<"Hello!"<<endl;
     cout<<"1.Add Rooms \n2.View All Bookings \n3.View available Rooms\n4.Calculate Total earnings"<<endl;
     cout<<"Enter choice"<<endl;
}
//user menu
void userMenu()
{
    system("cls");
     cout<<"Welcome!"<<endl;
     cout<<"1.View Room Types \n2.Book a Room \n3.feature3\n4.fature 4"<<endl;
     cout<<"Enter choice"<<endl;
}