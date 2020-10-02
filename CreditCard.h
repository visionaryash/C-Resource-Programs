#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H

#include <iostream>
#include <string>

using  std::string;

class CreditCard
{
private:
    string number;
    string name;
    int limit;
    double balance;

public:

    CreditCard(string no, string nm, int lim, double bal = 0);

    string getNumber() const { return number; }
    string getName() const { return name; }
    double getBalance() const { return balance; }
    int getLimit() const { return limit; }

    bool chargelt(double price);
    void makePayment(double payment)
    {
        balance -= payment;
    }
};

std::ostream& operator<<(std::ostream& out, const CreditCard& c);
#endif