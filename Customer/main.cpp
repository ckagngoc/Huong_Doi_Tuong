#include "include.h"
#include "Name.h"
#include "CreditData.h"
#include "Customer.h"

int main () {
    Customer cs1("Pham","Duc","Minh",7000000000,10000000000,"0914671265");
    Customer cs2("Nguyen","Ngoc","Hieu Ngu",700,10000,"190010 khong nho");
    cs1.showCustomer();
    cout << "\n\n";
    cs2.showCustomer();
    return 0;
}