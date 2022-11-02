class SavingsAccount
{
private:
    static double annualInterestRate;
    double savingsBalance;

public:
    SavingsAccount(double savingsBalance);
    static void modifyInterestRate(double annualInterestRate);
    double calculateMonthlyInterest();

    ~SavingsAccount();
};