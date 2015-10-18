#include "bankaccount.h"

int main()
{
    BankAccount ba("Mohamed Anwer", "A345DX", 50000.45);
    ba.display();
    ba.deposit(40);
    ba.display();
    ba.withdraw(100);
    ba.display();

    return 0;
}
