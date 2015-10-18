#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount
{
public:
    BankAccount();
    BankAccount(const string & name, const string & accountNumber, float balance);

    void display() const;

    void  deposit(const float amount);
    float withdraw(const float amount);

private:
    string m_name;
    string m_accountNumber;
    float  m_balance;
};

#endif // BANKACCOUNT_H
