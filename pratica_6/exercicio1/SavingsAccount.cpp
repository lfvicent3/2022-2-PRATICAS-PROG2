#include "SavingsAccount.h"

double SavingsAccount::annualInterestRate = 3.0;

SavingsAccount::SavingsAccount(double savingsBalance){
    this->savingsBalance = savingsBalance;
}

void SavingsAccount::modifyInterestRate(double annualInterestRate){
    SavingsAccount::annualInterestRate = annualInterestRate;
}

double SavingsAccount::calculateMonthlyInterest(){
    this->savingsBalance += this->savingsBalance * SavingsAccount::annualInterestRate / 12;

    return this->savingsBalance;
}

SavingsAccount::~SavingsAccount(){
    
}

