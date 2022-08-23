// file name: Date.h
// header and method of class Date
// author: Pham Duc Minh - BDATTT

class Date {
    private:
        /* data */
        int day, month, year; 
    public:
        Date(int = 1, int = 1, int = 2000); // Gia tri ngam dinh la Date: 1-1-2000
        void displayDate();
};
//-------------------------------------------------------------------------------------------------
Date::Date(int day, int month, int year) : day(day), month(month), year(year) {
    if(day < 1 || day > 31) this->day = 1; //exeption of day
    if(month < 1 || month > 12) this->month = 1; // exeption of month
    if(year < 1) this->year = 2000; // exeption of year
}

void Date::displayDate() {
    cout <<day<<"-"<<month<<"-"<<year; //Display: Date: day-month-year
}