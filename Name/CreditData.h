#include "include.h"

class CreditData {
private:
    /* data */
    double currentBalance;
    double maxBalance;
public:
    CreditData(double, double = 0);
    void displayCreditData();
};

CreditData::CreditData(double currentBalance, double maxBalance) {
    this->currentBalance = currentBalance;
    if(maxBalance < currentBalance) this->maxBalance = currentBalance;
    else this->maxBalance = maxBalance;
}

void CreditData::displayCreditData() {
    double creditLeft = maxBalance - currentBalance;
    cout << "Current balance: $"<<currentBalance<<"\nMaximum balance: $"<<maxBalance<<"\nCredit left: $"<<creditLeft<<endl;
}
