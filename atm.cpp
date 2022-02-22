/* @author: Berke Altıparmak
 You may use, distribute and modify this code under the
 terms of the Beerware license, which unfortunately won't be
 written for another century.
 ----------------------------------------------------------------------------
 "THE BEER-WARE LICENSE" (Revision 42):
 <berkealtiparmak@outlook.com> wrote this file.  As long as you retain this notice you
 can do whatever you want with this stuff. If we meet some day, and you think
 this stuff is worth it, you can buy me a beer in return.   Berke Altıparmak
 ----------------------------------------------------------------------------
*/


#include <iostream>
#include <vector>
using namespace std;

void showMenu()
{
    cout << "                         " << endl;
    cout << "                         " << endl;
    cout << "**********MENU**********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
}

int main()
{

    int option;
    double balance = 500;
    double deposit, withdraw;

    do
    {
        showMenu();
        cout << "Action?: " << endl;
        cin >> option;
        system("cls");

        switch (option)
        {
        case 1:
            cout << balance << " $" << endl;
            break;
        case 2:
            cout << "Deposit amount?: ";
            cin >> deposit;
            balance += deposit;
            break;
        case 3:
            cout << "Withdraw amount?: ";
            cin >> withdraw;
            if (withdraw > balance)
                cout << "Not enough money!!";
            else
                balance -= withdraw;
            break;
        }
    } while (option != 4);

    system("pause>0");
}
