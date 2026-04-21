#include <iostream>
#include <conio.h>
using namespace std;
main()
{ 


    int MAX = 100;
    string names[MAX];
    string ids[MAX];
    string membershipTypes[MAX];
    string prefrence[MAX];
    string phones[MAX];
    int fees[MAX];
    bool isActive[MAX] = {false};
    
    int memberCount = 0;
    int choice;
    string searchID;
    string checkID;
    bool found = false;
    
    cout << "====================================\n";
    cout << "====================================\n";
    cout << "   SIMPLE GYM MANAGEMENT SYSTEM\n";
    cout << "====================================\n";
    cout << "====================================\n\n";
    
    while(true) 
    {
        cout << "1. Add New Member\n";
        cout << "2. View All Members\n";
        cout << "3. Search Member\n";
        cout << "4. Check-in Member\n";
        cout << "5. View Total Members\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "Enter any key to proceed ";
        getch();
        system("cls");
        if(choice == 1) 
        {
            if(memberCount >= MAX) 
            {
                cout << "Gym is full! Cannot add more members.\n";
            }
            else 
            {
                cout << "\nEnter Member Name: ";
                cin >> names[memberCount];
                cout << "\nEnter Member ID: ";
                cin >> ids[memberCount];
                cout << "\nEnter Phone Number: ";
                cin >> phones[memberCount];
                cout << "\nEnter Membership Type (Monthly/Yearly): ";
                cin >> membershipTypes[memberCount];
                cout << "\nEnter Prefrence (Bulk/Weightloss):";
                cin >>prefrence[memberCount];
                cout << "\nEnter Monthly Fee: ";
                cin >> fees[memberCount];

                isActive[memberCount] = true;
                memberCount++;
                
                cout << "\nMember added successfully!\n\n";
                cout << "Enter any key to proceed ";
                getch();
                system("cls");
            }
        }
        else if(choice == 2)
        {  
            if(memberCount == 0) 
            {
                cout << "\nNo members found!\n\n\n";
            } 
            else 
            {
                cout << "\n--- All Members List ---\n";
                for(int i = 0; i < memberCount; i++) 
                {
                    if(isActive[i]) 
                    {
                        cout << i+1 << ". Name: " << names[i] 
                             << "   \nID: " << ids[i]
                             << "   \nPhone: " << phones[i]
                             << "   \nType: " << membershipTypes[i]
                             << "   \nFee: Rs." << fees[i] <<"\n\n\n"<< endl;
                    }
                }
                cout << "Enter any key to proceed ";
                getch();
                system("cls");
            }
        }
        else if(choice == 3) 
        {  
            cout << "\nEnter Member ID to search: ";
            cin >> searchID;
            
            for(int i = 0; i < memberCount; i++) 
            {
                if(ids[i] == searchID && isActive[i]) 
                {
                    cout << "\nMember Found!";
                    cout << "\nName: " << names[i];
                    cout << "\nID: " << ids[i];
                    cout << "\nPhone: " << phones[i];
                    cout << "\nMembership: " << membershipTypes[i];
                    cout << "\nPrefrence : " <<prefrence[i];
                    cout << "\nFee: Rs." << fees[i];
                    cout << "\n\n\n";
                    found = true;
                }
                else 
                {
                    cout << "\nMember not found!\n\n\n";    
                }
                cout << "Enter any key to proceed ";
                getch();
                system("cls");
            }
           
        }
         else if(choice == 4) 
         {
            cout << "\nEnter Member ID for Check-in: ";
            cin >> checkID;
            
            for(int i = 0; i < memberCount; i++) 
            {
                if(ids[i] == checkID && isActive[i]) 
                {
                    cout << "Welcome " << names[i] << "! Check-in successful.\n";
                    found = true;
                }
                else 
                {
                    cout << "Invalid Member ID or Inactive membership.\n";
                }
                cout << "Enter any key to proceed ";
                getch();
                system("cls");
            }
            
        }
        else if(choice == 5) 
        {
            cout << "Total Active Members : " << memberCount <<"\n\n";
            cout << "Enter any key to proceed ";
            getch();
            system("cls");
        }
        else if(choice == 6) 
        {
            cout << "\nThank you for using Gym Management System!\n\n";
            cout << "Enter any key to proceed ";
            getch();
            system("cls");
        }
        
        else 
        {
            cout << "Invalid choice! Please try again.\n\n";
            cout << "Enter any key to proceed ";
            getch();
            system("cls");
        }
    }
}