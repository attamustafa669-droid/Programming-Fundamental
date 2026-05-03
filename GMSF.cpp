#include <iostream>
#include <conio.h>
using namespace std;
//Global Variables
const int maximum = 100;
string names[maximum];
string ids[maximum];
string membershipTypes[maximum];
string prefrence[maximum];
string phones[maximum];
int fees[maximum];
bool isActive[maximum] = {false};
int memberCount = 0;
//Function names
void printMenu();
void printHeader();
void pauseAndClear();
void addMember();
void viewAllMembers();
void searchMember();
void checkInMember();
void viewTotalMembers();
//Driver code
main()
{
    printHeader();

    while (true)
    {
        printMenu();

        int choice;
        cin >> choice;
        pauseAndClear();

        if (choice == 1)
           {
            addMember();
           }
        else if (choice == 2)
           {
            viewAllMembers();
           } 
        else if (choice == 3)
           {
            searchMember();
           } 
        else if (choice == 4)
           {
            checkInMember();
           }
        else if (choice == 5)
            {
             viewTotalMembers();
            }
        else if (choice == 6)
        {
            cout << "\nThank you for using Gym Management System!\n\n";
            pauseAndClear();
            break;
        }
        else
        {
            cout << "Invalid choice! Please try again.\n\n";
            pauseAndClear();
        }
    }
}
//Functions
void printHeader()
{
    cout << "====================================\n";
    cout << "====================================\n";
    cout << "   SIMPLE GYM MANAGEMENT SYSTEM\n";
    cout << "====================================\n";
    cout << "====================================\n\n";
}
void printMenu()
{
    cout << "1. Add New Member\n";
    cout << "2. View All Members\n";
    cout << "3. Search Member\n";
    cout << "4. Check-in Member\n";
    cout << "5. View Total Members\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
}
void pauseAndClear()
{
    cout << "Enter any key to proceed ";
    getch();
    system("cls");
}
void addMember()
{
    if (memberCount >= maximum)
    {
        cout << "Gym is full! Cannot add more members.\n";
        return;
    }
    cout << "\nEnter Member Name: ";
    cin >> names[memberCount];
    cout << "\nEnter Member ID: ";
    cin >> ids[memberCount];
    cout << "\nEnter Phone Number: ";
    cin >> phones[memberCount];
    cout << "\nEnter Membership Type (Monthly/Yearly): ";
    cin >> membershipTypes[memberCount];
    cout << "\nEnter Prefrence (Bulk/Weightloss): ";
    cin >> prefrence[memberCount];
    cout << "\nEnter Monthly Fee: ";
    cin >> fees[memberCount];
    isActive[memberCount] = true;
    memberCount++;
    cout << "\nMember added successfully!\n\n";
    pauseAndClear();
}
void viewAllMembers()
{
    if (memberCount == 0)
    {
        cout << "\nNo members found!\n\n\n";
        return;
    }
    cout << "\n--- All Members List ---\n";
    for (int i = 0; i < memberCount; i++)
    {
        if (isActive[i])
        {
            cout << i + 1 << ". Name: " << names[i];
            cout << "\nID: " << ids[i];
            cout << "\nPhone: " << phones[i];
            cout << "\nType: " << membershipTypes[i];
            cout << "\nFee: Rs." << fees[i] << "\n\n\n";
        }
    }
    pauseAndClear();
}
void searchMember()
{
    string searchID;
    bool found = false;
    cout << "\nEnter Member ID to search: ";
    cin >> searchID;
    for (int i = 0; i < memberCount; i++)
    {
        if (ids[i] == searchID && isActive[i])
        {
            cout << "\nMember Found!";
            cout << "\nName: " << names[i];
            cout << "\nID: " << ids[i];
            cout << "\nPhone: " << phones[i];
            cout << "\nMembership: " << membershipTypes[i];
            cout << "\nPrefrence : " << prefrence[i];
            cout << "\nFee: Rs." << fees[i];
            cout << "\n\n\n";
            found = true;
            break;
        }
    }
    if (!found)
        cout << "\nMember not found!\n\n\n";
    pauseAndClear();
}
void checkInMember()
{
    string checkID;
    bool found = false;
    cout << "\nEnter Member ID for Check-in: ";
    cin >> checkID;
    for (int i = 0; i < memberCount; i++)
    {
        if (ids[i] == checkID && isActive[i])
        {
            cout << "Welcome " << names[i] << "! Check-in successful.\n";
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Invalid Member ID or Inactive membership.\n";
    pauseAndClear();
}
void viewTotalMembers()
{
    cout << "Total Active Members : " << memberCount << "\n\n";
    pauseAndClear();
}