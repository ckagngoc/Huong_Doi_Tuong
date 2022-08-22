class DateAndTime {
    private:
        int month;
        int day;
        int year;
        int hour;
        int minute;
        int second;
    public:
        DateAndTime(int = 1, int = 1, int = 1900, int = 0, int =0, int = 0);
        void setDate(int, int, int);
        void setMonth(int);
        void setDay(int);
        void setYear(int);
        int getDay();
        int getMonth();
        int getYear();
        void nextDay();
        void setTime(int, int, int);
        void setHour(int);
        void setMinute(int);
        void setSecond(int);
        int getHour();
        int getMinute();
        int getSecond();
        void printStandard();
        void printMilitary();
        int monthDays();
        void tick();
        bool leapYear();
}

