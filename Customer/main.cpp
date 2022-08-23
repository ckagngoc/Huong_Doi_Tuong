#include "include.h"
#include "Name.h"
#include "CreditData.h"
#include "Customer.h"

int main () {
    int x;
    const int TIMES = 2;
    string first, middle, last, phone;
    double bal, lim;
    for(x = 0;x<TIMES;x++){
        cout<<endl<<"Please enter first name for customer #"<<(x+1)
        <<" ";
        cin >>first;
        cout <<"Please enter middle name: ";
        cin >> middle;
        cout <<"Please enter last name: ";
        cin >> last;
        cout <<"Please enter current balance: ";
        cin >> bal;
        cout <<"Please enter credit limit: ";
        cin >> lim;
        cout <<"Please enter phone number: ";
        cin >> phone;
        Customer cust(first, middle, last, bal, lim, phone);
        cust.showCustomer();
    }
    return 0;
}