#include "bankaccount.h"

#include <iostream>
using namespace std;

BankAccount::BankAccount()
{
    m_name          = "no name";
    m_accountNumber = "invalid";
    m_balance       = 0;
}

BankAccount::BankAccount(const string &name, const string &accountNumber, float balance)
{
    m_name          = name;
    m_accountNumber = accountNumber;
    m_balance       = balance;
}

void BankAccount::display() const
{
    cout << "Name: " << m_name << endl
         << "Account Number: " << m_accountNumber << endl
         << "Balance: " << m_balance << endl;
}

void BankAccount::deposit(const float amount)
{
    if(amount > 0)
    {
        m_balance += amount;
    }
}

float BankAccount::withdraw(const float amount)
{
    if(m_balance > amount)
    {
        m_balance -= amount;
        return amount;
    }
    else
    {
        return 0;
    }
}
