#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H

#include <string>
#include <iostream>
#include <ctime>

class CreditCard{
    public:
        CreditCard(const std::string& no, const std::string& nm, int lim, double bal=0);
        std::string getNumber() const {return number;}
        void setNumber(const std::string& no){number = no;}
        std::string getName() const {return name;}
        void setName(const std::string& nm){name = nm;}
        /* RE: Reinforcement 13. Lets assume a credit card interest rate of 5.99%*/
        double getBalance() const {return balance * interestRate;}
        void setBalance(double bal){balance = bal;}
        int getLimit() const {return limit;}
        void setLimit(int lim){limit = lim;}
        double getLateFee() const {return lateFee;}
        void setLateFee(double fee){lateFee = fee;}
        
        std::time_t getDueDate(); //The method will be defined in CreditCard.cpp 


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
        double interestRate = 0.0599;
        double lateFee = 29.00;
};

// Print card information. 
std::ostream& operator<<(std::ostream& out, const CreditCard& c);
#endif