#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H

#include <string>
#include <iostream>
#include <ctime>

class CreditCard{
    public:
        CreditCard(const std::string& no, const std::string& nm, int lim, double bal=0);
        std::string getNumber() const {return number;}
        std::string getName() const {return name;}
        /* RE: Reinforcement 13 (notes on Line 16 were written prior). Lets assume a credit card interest rate of 5.99%*/
        double getBalance() const {return balance * 0.0599;}
        int getLimit() const {return limit;}
        std::time_t getDueDate(); //The method will be defined in CreditCard.cpp 
        double getLateFee() const {return 29.00;}

        /*For Reinforcement 13, my initial instinct is that the interest should be tacked on to the chargeIt function, but it says to charge interest to each payment. 
        * I checked the hint and it says interest should be tacked on to the existing balance, which makes sense. 
        */
        bool chargeIt(double price);
        void makePayment(double payment);
    
    private: 
        std::string number;
        std::string name;
        int limit;
        double balance;
        time_t dueDate;
};

// Print card information. 
std::ostream& operator<<(std::ostream& out, const CreditCard& c);
#endif