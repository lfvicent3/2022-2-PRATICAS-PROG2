#include "SavingsAccount.h"
#include <iostream>

int main()
{
    SavingsAccount saver1 = SavingsAccount(2000);
    SavingsAccount saver2 = SavingsAccount(3000);

    std::cout << saver1.calculateMonthlyInterest() << std::endl;
    std::cout << saver2.calculateMonthlyInterest() << std::endl;;

    SavingsAccount::modifyInterestRate(4.00);

    std::cout << saver1.calculateMonthlyInterest() << std::endl;;
    std::cout << saver2.calculateMonthlyInterest() << std::endl;;

    return 0;
}
