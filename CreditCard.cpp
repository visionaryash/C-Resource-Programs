#include "CreditCard.h"
#include <iostream>
CreditCard::CreditCard(string no, string nm, int lim, double bal)
{
    number = no;
    name = nm;
    balance = bal;
    limit = lim;
}

bool CreditCard::chargelt(double price)
{
    if (price + balance > double(limit))
        return false;
    balance += price;
    return true;
}

std::ostream &operator<<(std::ostream& out, const CreditCard& c)
{
    out << "Number" << c.getNumber() << "\n"
        << "Name" << c.getName() << "\n"
        << "balance" << c.getBalance() << "\n"
        << "limit" << c.getLimit() << "\n";
    return out;
}