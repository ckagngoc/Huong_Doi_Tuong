class Customer {
    private:
        Name name;
        CreditData credit;
        string phoneNumber;
    public:
        Customer(string, string, string, double, double, string);
        void showCustomer();
};

Customer::Customer(string first, string middle, string last, 
double currentBalance, double maxBalance, 
string phoneNumber)
:name(first, middle, last), credit(currentBalance, maxBalance) {
    this->phoneNumber = phoneNumber;
}

void Customer::showCustomer() {
    name.displayFullName();
    credit.displayCreditData();
    cout <<"Phone number: "<<phoneNumber<<endl;
}