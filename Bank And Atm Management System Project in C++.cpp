#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <windows.h>
using namespace std;
class bank
{
private:
    float balance;
    string id, pass, name, fname, address, phone, pin;

public:
    void menu();
    void bank_management();
    void atm_management();
    void new_user();
    void AlreadyUser();
    void Deposit();
    void withdraw();
    void Transfer();
    void payment();
    void search();
    void edit();
    void del();
    void show_records();
    void show_payment();
    void user_balance();
    void withdraw_atm();
    void check_Details();
};
void introduction()
{
    cout << "\n\n\n\n\n\t";
    for (int i = 1; i <= 60; i++)
        cout << "*";
    cout << "\n\t ";
    for (int i = 1; i <= 59; i++)
        cout << "*";
    cout << "\n\t ";
    for (int i = 1; i <= 56; i++)
        cout << "*";
    cout << "\n\n\t\t\tBank & ATM Management System\n\n\t\t\t\tProject In C++\n\n\t";
    for (int i = 1; i <= 57; i++)
        cout << "*";
    cout << "\n\t ";
    for (int i = i; i <= 58; i++)
        cout << "*";
    cout << "\n\t ";
    for (int i = i; i <= 60; i++)
        cout << "*";
    getch();
    system("cls");
    cout << "\n\n\n\n\n\t\t\t";
    for (int i = 1; i <= 30; i++)
        cout << "*";
    cout << "\n\t\t\t\t";
    for (int i = 1; i <= 30; i++)
        cout << "*";
    cout << "\n\n\t\t\t      My Best Friend";
    cout << "\n\n\t\t\t\t 1. Allah Pak";
    cout << "\n\t\t\t2. Hazrat Muhammad(S.A.W)\n\n\t\t\t";
    for (int i = 1; i <= 30; i++)
        cout << "*";
    cout << "\n\t\t\t";
    cout << "*";
    getch();
    system("cls");
    cout << "\n\n\t";
    for (int i = 1; i <= 60; i++)
        cout << "*";
    cout << "\n\t";
    for (int i = 1; i <= 60; i++)
        cout << "*";

    cout << "\n\n\t\t\tSoftware Developer Introduction";
    cout << "\n\n\t Name:\n\t\t\t\t\tSudheer Kumar";
    cout << "\n\tDegree:\n\t\t\tBSCS(Computer Science)";
    for (int i = 1; i <= 60; i++)
        cout << "*";
    cout << "\n\t";
    for (int i = 1; i <= 60; i++)
        cout << "*";
    getch();
}
void bank::menu()
{
p:
    system("cls");
    int choice;
    char ch;
    string pin;
    string pass;
    string email;
    cout << "\n\n\t\t\tControl Panel" << endl;
    cout << "\n\n 1. Bank Management:" << endl;
    cout << "\n 2. ATM Management: " << endl;
    cout << "\n 3 .Exit:" << endl;
    cout << endl;
    cout << "\n\n Enter Your Choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        system("cls");
        cout << "\n\n\t\t\tLogin Account:";
        cout << "\n\n E-mail= " << email;
        cin >> email;
        cout << "\n\n Pin Code:" << endl;
        for (int i = 1; i <= 5; i++)
        {
            ch = getch();
            pin += ch;
            cout << "*";
        }

        cout << "\n\n\t\tPassword:";
        for (int i = 1; i <= 5; i++)
        {
            ch = getch();
            pass += ch;
            cout << "*";
        }
        if (email == "SudheerKothari@gmail.com" && pin == "13366" && pass == "14366")
        {
            bank_management();
        }
        else
        {
            cout << "\n\n Your Pin &  E-mail And Password Is Wrong..." << endl;
        }
        bank_management();
        break;
    case 2:
        atm_management();
        break;
    case 3:
        exit(0);
    default:
        cout << "\n\n Dear Customer You Have Entered The Invalid Choice Please Entered The Valid Choice: ";
    }
    getch();
    goto p;
}
void bank::bank_management()
{
p:
    system("cls");
    int choice;
    cout << "\n\n\n\t\t\t Bank Management";
    cout << "\n\n 1. New User:";
    cout << "\n2.Already User ";
    cout << "\n3.Deposit Option ";
    cout << "\n4.Withdraw Option";
    cout << "\n5.Transfer Option ";
    cout << "\n6.Payment Option :";
    cout << "\n7.Search User Record";
    cout << "\n8.Edit User:";
    cout << "\n9.Delete User Record:";
    cout << "\n10.Show All Records:";
    cout << "\n11.Payment All Records:";
    cout << "\n12.Go Back:";
    cout << "\n\n Enter Your Choice:";
    cin >> choice;
    switch (choice)
    {
    case 1:
        new_user();
        break;
    case 2:
        AlreadyUser();
        break;
    case 3:
        Deposit();
        break;
    case 4:
        withdraw();
        break;
    case 5:
        Transfer();
        break;
    case 6:
        payment();
        break;
    case 7:
        search();
        break;
    case 8:
        edit();
        break;
    case 9:
        del();
        break;
    case 10:
        show_records();
        break;
    case 11:
        show_payment();
        break;
    case 12:
        menu();
        break;
    default:
        cout << "Dear Customer You Have Entered The Invalid Choice Please Entered The Valid Choice: ";
    }
    getch();
    goto p;
}

void bank::atm_management()
{
p:
    system("cls");
    int choice;
    cout << "\n\n\t\t\tAtm Management System:";
    cout << "\n\n 1. User Login & Check Balance";
    cout << "\n\n 2 .Withdraw Amount";
    cout << "\n 3. Account Details";
    cout << " /n4. Go Back";
    cout << "\n\nEnter Your Choice:";
    cin >> choice;
    switch (choice)
    {
    case 1:
        user_balance();
        break;
    case 2:
        withdraw_atm();
        break;
    case 3:
        check_Details();
        break;
    case 4:
        menu();
        break;
    default:
        cout << "\n\nDear Customer You Have Entered The Invalid Choice Please Entered The Valid Choice: ";
    }
    getch();
    goto p;
}
void bank::new_user()
{
p:
    system("cls");
    fstream file;
    int p;
    float b;
    string n, f, pa, a, ph, i;
    cout << "\n\n\t\t\tNew User:";
    cout << "\n\nUser Id: ";
    cin >> id;
    cout << "\n\n\t\tName : ";
    cin >> name;
    cout << "\n\n Father Name:";
    cin >> fname;
    cout << "\n\n\t\tAddress: ";
    cin >> address;
    cout << "\n\nPin (5 Digit)";
    cin >> pin;
    cout << "\n\n\t\tPassword : ";
    cin >> pass;
    cout << "\n\nPhone No: ";
    cin >> phone;
    cout << "\n\n\t\tCurrentBalance: ";
    cin >> balance;

    file.open("Bank.txt", ios::in);
    if (!file)
    {
        file.open("Bank.txt", ios::app | ios::out);
        file << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
        file.close();
    }
    else
    {
        file >> i >> n >> f >> a >> p >> pa >> ph >> b;
        while (!file.eof())
        {
            if (i == id)
            {
                cout << "\n\nUser Id Already Exist...";
                getch();
                goto p;
            }
            file >> i >> n >> f >> a >> p >> pa >> ph >> b;
        }
        file.close();
        file.open("Bank.txt", ios::app | ios::out);
        file << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
        file.close();
    }
    cout << "\n\n New User Account Is Created  Successfully......" << endl;
}
void bank::AlreadyUser()
{
p:
    system("cls");
    fstream file;
    string t_id;
    int found = 0;

    cout << "\n\n\t\t\tAlready User";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\nFile Does Note Exist:";
    }
    else
    {
        cout << "\n\nUser Id : ";
        cin >> t_id;
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id)
            {
                system("cls");
                cout << "\n\n\t\t\tAlready User Account";
                cout << "\n\nUser Id " << id << "   Pin Code: " << pin << "   PassWord: " << pass << endl;
                found++;
            }
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        if (found == 0)
            cout << "\n\nUser Id Cannot Found:";
    }
}
void bank::Deposit()
{

    fstream file, file1;
    system("cls");
    string t_id;
    float dep;
    int found = 0;
    cout << "\n\n\t\t\t Deposit Amount Option:";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\nFile Opening Error....";
    }
    else
    {
        cout << "User Id:";
        cin >> t_id;
        file1.open("bank1.txt", ios::app | ios::out);
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id)
            {
                system("cls");
                cout << "\n\nAmount For Deposit:";
                cin >> dep;
                balance += dep;
                file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
                found++;
                cout << "\n\n\t\t\tYour Amount " << dep << " Successfully Deposited....";
            }
            else
            {
                file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
            }
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt", "bank.txt");
        if (found == 0)

            cout << "\n\nUser Id Cannot Be Found:";
    }
}

void bank::withdraw()
{
    system("cls");
    fstream file, file1;
    string t_id;
    float with;
    int found = 0;
    cout << "\n\n\t\t\tWithdraw Amount Option:";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "Error opening file.";
    }
    else
    {
        cout << "\n\n User ID: ";
        cin >> t_id;
        file1.open("bank1.txt", ios::app | ios::out);
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id)
            {
                system("cls");
                cout << "\n\n Amount For Withdraw: ";
                cin >> with;
                if (with <= balance)
                {
                    balance -= with;
                    file1 << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
                    cout << "\n\n\t\t\t Your Amount " << with << " Successfully Withdrawn....";
                }
                else
                {
                    file1 << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
                    cout << "\n\n\t\t\t Your Current Balance" << balance << "Is Less You cannot withdraw more than that...";
                }
                found++;
            }
            else
            {
                file1 << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
            }
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt", "bank.txt");
        if (found == 0)
        {
            cout << "User Id Not Found.";
        }
    }
}

void bank::Transfer()
{
    fstream file, file1;

    system("cls");
    string s_id, r_id;
    float amount;
    int found = 0;
    cout << "\n\n\t\t\tPayment Transfer Option: ";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\n Flie Error opening.\n";
    }
    else
    {
        cout << "\n\n Enter Your User Id For Payment Transfer:";
        cin >> s_id;
        cout << "\n\nReciver User Id:";
        cin >> r_id;
        cout << "\n\nEnter Transfer Amount:";
        cin >> amount;
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (s_id == id && amount <= balance)
                found++;
            else if (r_id == id)
                found++;
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        if (found == 2)
        {
            file.open("bank.txt", ios::in);
            file1.open("bank1.txt", ios::app | ios::out);
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
            while (!file.eof())
            {
                if (s_id == id)
                {
                    balance -= amount;
                    file1 << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
                }
                else if (r_id == id)
                {
                    balance += amount;
                    file1 << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
                }
                else
                {

                    file1 << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
                }
                file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
            }

            file.close();
            file1.close();
            remove("bank.txt");
            rename("bank1.txt", "bank.txt");
            cout << "\n\n\t\t\t\tTransction Sucessfully....";
        }
        else
        {
            cout << "\n\n\t\t\tBoth Tranction User Ids Is invalid:" << endl;
        }
    }
}
void bank::payment()
{
    system("cls");
    int found = 0;
    string t_id;
    float amount;
    string b_name;
    SYSTEMTIME x;
    fstream file, file1;
    cout << "\n\n\t\t\tBills Payment Option: " << endl;
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\n File Openning Error... " << endl;
    }
    else
    {
        cout << "\n\nEnter User Id: ";
        cin >> t_id;
        cout << "\n\nBill Name: ";
        cin >> b_name;
        cout << "\n\nBill Amount: ";
        cin >> amount;
        file1.open("bank1.txt", ios::app | ios::out);
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id && amount <= balance)
            {
                balance -= amount;
                file1 << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
                found++;
            }
            else
            {
                file1 << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
            }
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt", "bank.txt");
        if (found == 1)
        {

            GetSystemTime(&x);
            file.open("bill.txt", ios::app | ios::out);
            file << t_id << " " << b_name << " " << amount << " " << x.wDay << "/" << x.wMonth << "/" << x.wYear << "\n";
            file.close();
            cout << "\n\n\t\t\t" << b_name << "Is Succesfully Paid:";
        }
        else
        {
            cout << "\n\nUser id or Amount Invalid:";
        }
    }
}
void bank::search()
{
    system("cls");
    fstream file;
    string t_id, n, f, p, ph;
    int found = 0, pi;
    cout << "\n\n\t\t\tSearch User Record:";
    file.open("bank.text", ios::in);
    if (!file)
    {
        cout << "\n\nFile Openening Error:";
    }
    else
    {
        cout << "\n\nEnter The User Id:";
        cin >> t_id;
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id)
            {
                system("cls");
                cout << "\n\n\t\t\tSearch User Record:";
                cout << "\n\n\n"
                     << "User Id:" << id << "  Name: " << name << " Father's Name " << fname << " ";
                cout << "\n"
                     << "Address:" << address << "Pin Code" << pin << " Password " << pass << " ";
                cout << "\n Phone No:" << phone << " Current Balance:" << balance;

                found++;
            }
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        if (found == 0)
            cout << "\n\nUser Id Cannot be Found:";
    }
}
void bank::edit()
{
    system("cls");
    fstream file, file1;
    string t_id, n, f, a, p, ph;
    int found = 0, pi;
    cout << "\n\n\t\t\t Edit User Records:";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\n File openening Error....";
    }
    else
    {
        cout << "\n\n User ID:";
        cin >> t_id;
        file1.open("bank.txt", ios::app | ios::out);
        file >> id >> name >> fname >> address >> pi >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id)
            {

                cout << "\n\n\t\tName : ";
                cin >> n;
                cout << "\n\n Father Name:";
                cin >> f;
                cout << "\n\n\t\tAddress: ";
                cin >> a;
                cout << "\n\nPin (5 Digit)";
                cin >> pi;
                cout << "\n\n\t\tPassword : ";
                cin >> p;
                cout << "\n\nPhone No: ";
                cin >> ph;
                file1 << " " << id << " " << n << " " << f << " " << a << " " << pi << " " << p << " " << ph << " " << balance << "\n";
                cout << "\n\n\n\t\t\tRecord Edit Succesfully...";
            }
            else
            {
                file1 << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
            }
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt", "bank.txt");
        if (found == 0)
            cout << "\n\nUser Id Cannot be Found....";
    }
}
void bank::del()
{
    system("cls");
    fstream file, file1;
    int found = 0;
    string t_id;
    cout << "\n\n\t\t\tEdit User Records:" << endl;
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "openening Error:";
    }
    else
    {
        cout << "User ID:" << endl;
        cin >> t_id;
        file1.open("bank.txt", ios::app | ios::out);
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id)
            {
                cout << "Record Deleted Succesfully: " << endl;
                found++;
            }
            else
            {
                file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
            }
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt", "bank.txt");
        if (found == 0)
            cout << "\n\n\t\t\tUser Id Cannot be Found:";
    }
}
void bank::show_records()
{
    system("cls");
    fstream file;
    int found = 0;
    cout << "\n\n\t\t\tShow All User Records: ";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\nFile Opening Error... ";
    }
    else
    {

        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            cout << "\n\n\nUser ID: " << id;
            cout << "\n Name: " << name;
            cout << "\n Father Name:" << fname;
            cout << "\nAddress: " << address;
            cout << "\nPin: " << pin;
            cout << "\nPassword: " << pass;
            cout << "\nPhone: " << phone;
            cout << "\nCurrent balance: " << balance;
            cout << "========================";
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
            found++;
        }

        file.close();
        if (found == 0)
            cout << "\n\n Data Base Is Empty....:";
    }
}
void bank::show_payment()
{
    system("cls");
    fstream file;
    float amount;
    int found = 0;
    string c_date;
    cout << "\n\n\t\t\t Show All Bill's Records: ";
    file.open("bill.txt", ios::in);
    if (!file)
    {
        cout << "file opening error: ";
    }
    else
    {

        file >> id >> name >> amount >> c_date;
        while (!file.eof())
        {
            cout << "User Id: " << id;
            cout << "Bill Name : " << name;
            cout << "Bill Amount" << amount;
            cout << "Date: " << c_date;

            cout << "====================" << endl;
            file >> id >> name >> amount >> c_date;

            found++;
        }

        file.close();
        if (found == 0)
            cout << "Data Base Is Empty....:";
    }
}
void bank::user_balance()
{
    system("cls");
    fstream file;
    string t_id;
    string t_pin;
    string t_pass;
    int found = 0;
    char ch;
    cout << "\n\n\t\t\tUser Login And Check Balance:" << endl;
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\n File Openening Error:";
    }
    else
    {
        cout << "\n\nUser Id:";
        cin >> t_id;
        cout << "\n\n\t\tPin Code:";
        for (int i = 1; i <= 5; i++)
        {
            ch = getch();
            t_pin += ch;
            cout << "*";
        }
        cout << "\n\nPassWord: ";
        for (int i = 1; i <= 5; i++)
        {
            ch = getch();
            t_pass += ch;
            cout << "*";
        }
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id && t_pin == pin && t_pass == pass)
            {
                cout << "\n\n\t\tYour Current Balance Is : " << balance;
                found++;
            }

            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        if (found == 0)
            cout << "\n\n\t\tUser Id, Pin & Password Is Invalid:.....";
    }
}
void bank::withdraw_atm()
{

    fstream file, file1;
    string t_id, t_pass, t_pin;
    float with;
    char ch;
    int found = 0;

    system("cls");
    cout << "Withdraw Amount Option:\n";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "Error opening file.\n";
    }
    else
    {
        cout << "User Id: ";
        cin >> t_id;
        cout << "\n\n\t\t Code:";
        for (int i = 1; i <= 5; i++)
        {
            ch = getch();
            t_pin = +ch;
            cout << "*";
        }
        cout << "\n\nPassWord: ";
        for (int i = 1; i <= 5; i++)
        {
            ch = getch();
            t_pass = +ch;
            cout << "*";
        }
        file1.open("bank1.txt", ios::app | ios::out);
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id && t_pin == pin && t_pass == pass)
            {

                cout << "Amount For Withdraw: ";
                cin >> with;
                if (with <= balance)
                {
                    balance -= with;
                    file1 << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
                    cout << "Your Amount " << with << " Successfully Withdrawn.\n";
                    cout << "Your Current Balance is " << balance;
                }
                else
                {
                    file1 << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
                    cout << "Your Current Balance is " << balance << ". You cannot withdraw more than that.\n";
                }
                found++;
            }
            else
            {
                file1 << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
            }
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt", "bank.txt");
        if (found == 0)
        {
            cout << "User Id Not Found.\n";
        }
    }
}
void bank::check_Details()
{
    fstream file, file1;
    string t_id, t_pass, t_pin;
    char ch;
    int found = 0;
    system("cls");
    cout << "\n\n\t\t\tCheck Details Option:";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\n\t\t\tError opening file.\n";
    }
    else
    {
        cout << "\n\nUser Id: ";
        cin >> t_id;
        cout << "\n\n\tPin Code:";
        for (int i = 1; i <= 5; i++)
        {
            ch = getch();
            t_pass += ch;
            cout << "*";
        }
        cout << "\n\nPassWord: ";
        for (int i = 1; i <= 5; i++)
        {
            ch = getch();
            t_pass = +ch;
            cout << "*";
        }
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id && t_pin == pin && t_pass == pass)
            {
                system("cls");
                cout << "\n\n\t\t\tCheck Details Option:";
                cout << "\n\n\nUser Id: " << id;
                cout << "\nName: " << name;
                cout << "\nFather Name:" << fname;
                cout << "\nAddress: " << address;
                cout << "\nPin: " << pin;
                cout << "\nPassword: " << pass;
                cout << "\nPhone: " << phone;
                cout << "\nbalance: " << balance;
                found++;
            }

            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        if (found == 0)

            cout << "\n\nUser Id Not Found.\n";
    }
}
int main()
{

    bank obj;
    introduction();
    obj.menu();
}
