#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

/*
1. menu
2. user registration (sign up)
3. user login (sign in)
4. Exit
5. input validation
*/

string emails[100] = {"abd", "ahmad", "ali", "james", "tomy", "rauf", "hassan"};
string passwords[100] = {"123", "1233", "1233", "623", "212", "321","567"};
bool hasDiscount[50] = {false};
int totalUsers = 7;

int choice;
// user varaibles
string customernames[50];
int customercount = 0;
int nightstay[50];
string roomtype[50];
char confirmation;




int rooms[50] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110,201,202,203,204,205,206,207,208,209,210};
int roomcount = 20;
int roomID[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12,13,14,15,16,17,18,19,20};

string  feedback[50];
float discount = 0.1;

// others
float bill, grandbill=0;
float userbills[50];

void Menu();
void signUp(string email, string password);
bool signIn(string email, string password);
bool isUserPresent(string email);
bool isuseradmin(string email, string password);
void adminMenu();
void addroom();
void viewbookings();
void viewvacantrooms();
void viewfeedbacks();
void showearnings();

// userfunctins
void userMenu();
void viewroomtype();
void bookroom();
void bookingreceipt();
void billcal();
void payment();
void cancelbooking();
void userfeedback();

int main()
{
    cout << "\n======================================================================================================\n";
    cout << "                                         Abdullah's Hotel<3 ";
    cout << "\n======================================================================================================\n";

    cout << "Welcome to the Abdullah's Hotel<3\nPlease Sign Up if you are a new user OR Sign In(Existing User /Admin)" << endl;

    do
    {
        Menu();

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

            if (isUserPresent(email))
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

            signIn(email, password);

            choice = 3; // Exit after sign in
            break;
        case 3:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
        getch();
        system("cls");
    } while (choice != 3);

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
    cout << "Sign In" << endl;
m:
    cout << "Enter your email: ";
    cin >> email;
    cout << "Enter your password: ";
    cin >> password;

    if (email == "admin" && password == "1234")
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
                system("cls");
                cout << "\n===================================================\n";
                cout << "            Welcome! " << emails[i] << endl;
                
                
                userMenu();
                return true;
            }
        }
    }
    cout << "Invalid email or password" << endl;
    goto m;
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
    cout << "\n======================================================================================================\n";

    cout << "1. Sign Up" << endl;
    cout << "2. Sign In" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
}

bool isuseradmin(string email, string password)
{

    adminMenu();
    return true;
}
// admin menu
void adminMenu()
{
    int adminchoice;
    system("cls");
    cout << "\n===================================================\n";
    cout << "                    Hello! ADMIN :) ";
    cout << "\n===================================================\n";
 
    cout << "1.Add Rooms \n2.View All Bookings \n3.View available Rooms\n4.Calculate Total earnings\n5.View Feedbacks\n6.Exit to main menu" << endl;
ifinvalid:
    cout << "Enter choice" << endl;
    cin >> adminchoice;
    switch (adminchoice)
    {
    case 1:

        addroom();
        break;
    case 2:
        viewbookings();
        break;
    case 3:
        viewvacantrooms();
        break;
    case 4:
       showearnings();
        break;
    case 5:
        viewfeedbacks();
        break;
    case 6:
        system("cls");
        main();

        break;
    default:
        cout << "Invalid choice\nRe-";
        goto ifinvalid;
        break;
    }
}
// user menu
void userMenu()
{
    int userchoice;
//   system("cls");
cout << "\n===================================================\n";
cout << "                    HOTEL MENU";
cout << "\n===================================================\n";
    cout << "1.View Room Types \n2.Book a Room \n3.Cancel boking\n4.Give feedback \n5.Checkout " << endl;
ifinvalid:
    cout << "Enter choice" << endl;
    cin >> userchoice;
    switch (userchoice)
    {
    case 1:
        viewroomtype();
        break;
    case 2:
    system("cls");
        bookroom();
        break;
    case 3:
        cancelbooking();
        break;
    case 4:
        userfeedback();
        break;
    case 5:
        system("cls");
        main();
        break;

    default:
        cout << "Invalid choice\nRe-";
        goto ifinvalid;
        break;
    }
}
// viewroomtype
void viewroomtype()
{
    
    cout << "1.Sigle Bed Room  2000 PKR/Night" << endl;
    cout << "2.Double Bed Room 3500 PKR/Night" << endl;
    cout << "Press any key to go back to menu" << endl;

    getch();
    system("cls");
    userMenu();
}

void bookroom()
{
    system("cls");
    string localCode; 
    bool isValidCode = false; 

    cout << "Enter Your Name" << endl;
    cin.ignore();
    getline(cin, customernames[customercount]);

    
    bool validRoomType = false;
    do {
        cout << "Enter Room Type (single/double): ";
        cin >> roomtype[customercount];

        if (roomtype[customercount] == "single" || roomtype[customercount] == "double") {
            validRoomType = true;
        } else {
            cout << "Invalid room type! Please enter 'single' or 'double'.\n";
        }
    } while (!validRoomType);
    

    cout << "Enter No of Nights Stay : ";
    cin >> nightstay[customercount];

    cout << "Do you have any Discout code(y/n): ";
    cin >> confirmation;
    if (confirmation == 'y')
    {
        cout << "enter code :" ;
        cin >> localCode;
        if (localCode == "newyear123")
        {
            isValidCode = true;
            cout << "Discount applied!\n";
        }
        else
            cout << "Invalid code" << endl;
    }
    else
        cout << "ok\n";
        hasDiscount[customercount] = isValidCode;

    cout << "Confirm Booking(y/n) : ";
    cin >> confirmation;
    if (confirmation == 'y')
    {
        bookingreceipt();  
    }
    else
    { system("cls");
        userMenu();
    }
}

void bookingreceipt()
{
    system("cls");

    cout << "==================================================\n";
    cout << "\n                      Reciept" << endl;
    cout << "==================================================\n";
    cout << "||\n|| NAME                                    " << customernames[customercount] << endl;
    cout << "||\n|| ROOMTYPE                                " << roomtype[customercount] << endl;
    cout << "||\n|| NIGHTSTAY                                  " << nightstay[customercount] << endl;
    cout << "||\n|| ROOM NO                                  " << rooms[customercount] << endl;
    billcal();
    cout << "==================================================\n";
    payment();
    userbills[customercount]=bill;
    customercount++;
  system("cls");
    
    userMenu();
}

void billcal()
{
    float basePrice = 0;

    if (roomtype[customercount] == "single")
    {

        basePrice = 2000;

    }
    else if (roomtype[customercount] == "double")
    {

        basePrice = 3500;
    }
    else
    cout << "Invalid room type\n";

    bill = basePrice * nightstay[customercount];
    if (hasDiscount[customercount]) {
        bill -= bill * discount; // 10% discount
    }

    cout << "||\n|| Total bill                               " << bill << endl;
}

void payment()
{
    float pay,tempbill=bill;
    while (true)
    {
        cout << "Enter cash: $";
        cin >> pay;

        if (pay > tempbill)
        {
            pay = pay - tempbill;
            cout << "Your change: $" << pay << endl;
            cout << "Thank you!" << endl;
            getch();
            break;
        }
        else if (pay < tempbill)
        {
            tempbill = tempbill - pay;
            cout << "Remaining amount: $" << tempbill << endl;
            cout << "Please pay the remaining amount..." << endl;
            getch();
        }
        else
        {
            cout << "Thank you!" << endl;
            getch();
            break;
        }
    }
    grandbill+=bill;
}
void addroom()
{
    system("cls");
    cout << "\n===================================================\n";
    cout << "                       ADD ROOM\n";
    cout << "\n===================================================\n";
    cout << "ENTER Room NO: ";
    cin >> rooms[roomcount];
    cout << "\n===================================================\n";
    roomID[roomcount] = roomcount + 1;
    cout << "\nROOM ADDED SUCCESSFULLY WITH ID: " << roomID[roomcount];
    cout << "\n===================================================\n";
    roomcount++;
    getch();
    system("cls");
    adminMenu();
}

void viewbookings()
{
    system("cls");

    cout << "\n===================================================\n";
    cout << "                      BOOKING LIST                ";
    cout << "\n===================================================\n";
    if (customercount == 0)
    {
        cout << "NO BOOKINGS" << endl;
    }
    else
    {
        for (int i = 0; i < customercount; i++)
        {
            cout << "ID: " << roomID[i] << ", NAME: " << customernames[i] << ", NIGHTS: " << nightstay[i] << ", ROOM NO: " << rooms[i] << endl;
        }
    }
    cout << "\n===================================================\n";
    getch();
    system("cls");
    adminMenu();
}

void viewvacantrooms()
{
    system("cls");

    cout << "\n===================================================\n";
    cout << "                     VACANT ROOMS                    ";
    cout << "\n===================================================\n";
    if (customercount==roomcount)
    {
        cout << "                NO VACANT ROOMS                        ";
    }
    else
    {
         
    for (int i = 0; i < roomcount; i++)
    {
        if (i >= customercount)
        {
            cout << "ROOMID: " << roomID[i] << ", ROOM NO: " << rooms[i] << endl;
        }
        
    }
    }
    
   
    cout << "\n===================================================\n";
    getch();
    system("cls");
    adminMenu();
}

void cancelbooking()
{
    float tempbill;
    system("cls");
    cout << "\n===================================================\n";
    cout << "                   YOUR BOOKINGS                     \n";
    string customerName;
    bool found = false; 

    if (customercount == 0)
    {
        cout << "  YOU Have NO Bookings" << endl;
    }
    else
    {
        cout << "Enter your name: ";
        cin >> customerName; 

        
        for (int i = 0; i < customercount; i++)
        {
            if (customernames[i] == customerName) 
            {
                cout << "ID: " << roomID[i] << ", NAME: " << customernames[i] << ", NIGHTS: " << nightstay[i] << ", ROOM NO: " << rooms[i] << endl;
                found = true; 
            }
        }

        if (!found)
        {
            cout << "No bookings found for this customer." << endl;
        }
        else
        {
            cout << "\n===================================================\n";
            int roomIDToCancel;
            bool validRoomID = false;

            do
            {
                cout << "\nENTER THE ROOM ID TO CANCEL: ";
                cin >> roomIDToCancel;
                
                
                for (int i = 0; i < customercount; i++)
                {
                    if (customernames[i] == customerName && roomID[i] == roomIDToCancel)
                    {
                        validRoomID = true;
                        break;
                    }
                }

                if (!validRoomID)
                {
                    cout << "INVALID ROOM ID for your booking. Please enter a valid one.\n";
                }
            } while (!validRoomID);

            
            for (int i = 0; i < customercount; i++)
            {
                if (customernames[i] == customerName && roomID[i] == roomIDToCancel)
                {
                    tempbill=userbills[i];
                    grandbill-=userbills[i];
                    
                    for (int j = i; j < customercount - 1; j++)
                    {
                        customernames[j] = customernames[j + 1];
                        roomID[j] = roomID[j + 1];
                        nightstay[j] = nightstay[j + 1];
                        rooms[j] = rooms[j + 1];
                        feedback[j]=feedback[j+1];
                        userbills[j]=userbills[j+1];
                       
                    }
                   
                    customercount--; 
                    break;
                }
            }

            cout << "\n===================================================\n";
            cout << "             BOOKING CANCELLED SUCCESSFULLY ";
            cout << "\n===================================================\n";
        }
    }

    getch();
    system("cls");
    userMenu();
}

void userfeedback()
{
    system("cls");
    cout<<"===================================================\n";
    cout << "                     FEEDBACK ";
    cout << "\n===================================================\n";
    cin.ignore();
    getline(cin,feedback[customercount]);
   
    cout<<"\n===================================================\n";
    cout << "                THANKS for FEEDBACK ";
    cout<<"\n===================================================\n";
    getch();
    system("cls");

    userMenu();
}

void viewfeedbacks()
{
    system("cls");
    cout<<"===================================================\n";
    cout << "                 CUSOMER'S FEEDBACK ";
    cout << "\n===================================================\n";
    for (int i = 0; i < customercount; i++)
    {
        cout<<"Feedback "<<i+1<<". CustomerName "<<customernames[i]<<endl;
        cout<<" Feedback "<<feedback[i]<<endl;

    }
    cout << "\n===================================================\n";

    getch();
    system("cls");
    adminMenu();
}
void showearnings()
{
    system("cls");
    cout << "===================================================\n";
    cout << "                     EARNNINGS ";
    cout <<"\n===================================================\n";
    for (int i = 0; i < customercount; i++)
    {
        cout<<"Customer Name  "<<customernames[i]<<"                 BILL "<<userbills[i]<<endl;
    }
    cout <<"\n===================================================\n";
    cout<<"Grand Total:                               || "<<grandbill;
    getch();
    system("cls");
    adminMenu();
}