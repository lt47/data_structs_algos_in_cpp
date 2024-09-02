#include "CreditCard.h"

using namespace std;

CreditCard::CreditCard(const string& no, const string& nm, int lim, double bal){
    number = no;
    name = nm;
    balance = bal;
    limit = lim;
}

time_t CreditCard::getDueDate(){
    // Get the current time
    time_t now = time(NULL);

    // Convert time_t to struct tm
    struct tm *currentDueDate = localtime(&now);

    // Set the day of the month to 1 (first day). Using the '->' notation because it is a pointer and thats how pointer attributes are modified/accessed.
    currentDueDate->tm_mday = 1;

    // Set the time to midnight (00:00:00)
    currentDueDate->tm_hour = 0;
    currentDueDate->tm_min = 0;
    currentDueDate->tm_sec = 0;

    // Convert struct tm back to time_t
    dueDate = mktime(currentDueDate);
    return dueDate;
}

bool CreditCard::chargeIt(double price){
    if (price < 0.0){return false;}
    else if (price + balance > double(limit)){ return false;}
    balance += price;
    return true;
}

void CreditCard::makePayment(double payment){
    // Get the timestamp for the current date and time
    time_t currentDateTime;
    time(&currentDateTime);
    // this ensures that the payment is always positive. No action is taken otherwise.
    if (payment < 0.0){return;}
    /*Check if the payment was made after the due date. In the real world, there would also be a check
    * to determine if the minimum payment has already been made before penalizing the account holder. 
    * This can be considered a future enhancement when this is tested. */ 
    else if (currentDateTime > getDueDate()){
        balance -= payment;
        // Charge late payment fee per Reinforcement 14. 
        balance += getLateFee();
    }
    balance -= payment;
}

ostream& operator<<(ostream& out, const CreditCard& c){
    out << "Number = " << c.getNumber() << "\n"
        << "Name = " << c.getName() << "\n"
        << "Balance = " << c.getBalance() << "\n"
        << "Limit = " << c.getLimit() << "\n";
    
    return out;
}