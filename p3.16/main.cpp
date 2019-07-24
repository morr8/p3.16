/*
 ••• Business P3.16
 Write a program to simulate a bank transaction. There are two bank accounts: checking and savings. First, ask for the initial balances of the bank accounts; reject negative balances. Then ask for the transactions; options are deposit, withdrawal, and transfer. Then ask for the account; options are checking and savings. Then ask for the amount; reject transactions that overdraw an account. At the end, print the balances of both accounts.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "enter checking balance: ";
    float checking, savings, temp;
    cin >> checking;
    cout << "enter savings balance: ";
    cin >> savings;
    
    if (checking < 0 || savings < 0)
    {
        cout << "must be over 0\n";
        return 1;
    }
    
    cout << "deposit, withdrawal or transfer? ";
    string option;
    cin >> option;
    
    if (option == "deposit")
    {
        cout << "account? ";
        cin >> option;
        cout << "how much? ";
        cin >> temp;
        if (option == "checking")
        {
            checking += temp;
        }
        else
        {
            savings += temp;
        }
    }
    else if (option == "withdrawal")
    {
        cout << "account? ";
        cin >> option;
        cout << "how much? ";
        cin >> temp;
        if (option == "checking")
        {
            checking -= temp;
        }
        else
        {
            savings -= temp;
        }
        if (checking < 0 || savings < 0)
        {
            cout << "not enough funds\n";
            return 1;
        }
    }
    else if (option == "transfer")
    {
        cout << "transfer from? ";
        cin >> option;
        cout << "how much? ";
        cin >> temp;
        if (option == "savings")
        {
            savings -= temp;
            checking += temp;
        }
        else
        {
            savings += temp;
            checking -= temp;
        }
        if (checking < 0 || savings < 0)
        {
            cout << "not enough funds\n";
            return 1;
        }
    }
    cout << "checking balance: " << checking << "\nsavings balance: " << savings << "\n";
}
