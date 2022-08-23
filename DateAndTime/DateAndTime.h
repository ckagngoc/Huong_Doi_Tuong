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
        void printTime();
        int monthDays(int);
        void tick();
        bool leapYear();
};

DateAndTime::DateAndTime(int day, int month, int year, int hour, int minute, int second) {
    if(day > 0 || day < 32) this->day = day;
    else this->day = 1;
    if(month > 0 || month < 13) this->month = month;
    else this->month = 1;
    if(year > 0) this->year = year;
    else this->year = 1900;
    if(hour >= 0 || hour < 24) this->hour = hour;
    else this->hour = 0;
    if(minute >= 0 || minute < 60) this->minute = minute;
    else this->minute = 0;
    if(second >= 0 || second < 60) this->second = second;
    else this->second = 0;
}

void DateAndTime::setDate(int day, int month, int year) {
    if(day > 0 || day < 32) this->day = day;
    else this->day = 1;
    if(month > 0 || month < 13) this->month = month;
    else this->month = 1;
    this->year = year;
}

void DateAndTime::setDay(int day) {
    if(day > 0 || day < 32) this->day = day;
    else this->day = 1;
}

void DateAndTime::setMonth(int month) {
    if(month > 0 || month < 13) this->month = month;
    else this->month = 1;
}

void DateAndTime::setYear(int year) {
    this->year = year;
}

int DateAndTime::getDay() {
    return day;
}

int DateAndTime::getMonth() {
    return month;
}

int DateAndTime::getYear() {
    return year;
}

void DateAndTime::nextDay() {
    if(leapYear()) {
        if(month == 2) {
            if(day == monthDays(2)) {
                day = 1;
                month++;
            }
        }
    } else {
        if(month == 2 ) {
            if(day == monthDays(2)) {
                day = 1;
                month++;
            }
        }
    }
    if(month == 12 && day == monthDays(12)) {
        day = 1;
        month = 1;
        year++;
    } else if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day == monthDays(1)) {
        day = 1;
        month++;
    } else if((month == 4 || month == 6 || month == 9 || month == 11) && day == monthDays(4)) {
        day = 1;
        month++;
    } else {
        day++;
    }
}

void DateAndTime::setTime(int hour, int minute, int second) {
    if(hour >= 0 || hour < 24) this->hour = hour;
    else this->hour = 0;
    if(minute >= 0 || minute < 60) this->minute = minute;
    else this->minute = 0;
    if(second >= 0 || second < 60) this->second = second;
    else this->second = 0;
}

void DateAndTime::setHour(int hour) {
    if(hour >= 0 || hour < 24) this->hour = hour;
    else this->hour = 0;
}

void DateAndTime::setMinute(int minute) {
    if(minute >= 0 || minute < 60) this->minute = minute;
    else this->minute = 0;
}

void DateAndTime::setSecond(int second) {
    if(second >= 0 || second < 60) this->second = second;
    else this->second = 0;
}

int DateAndTime::getHour() {
    return hour;
}

int DateAndTime::getMinute() {
    return minute;
}

int DateAndTime::getSecond() {
    return second;
}

void DateAndTime::printStandard() {
    cout <<day<<"-"<<month<<"-"<<year<<endl;
    cout <<hour<<":"<<minute<<":"<<second<<endl;
}

void DateAndTime::printTime() {
    cout <<hour<<":"<<minute;
}

void DateAndTime::tick() {
    setSecond((getSecond() + 1 ) % 60);
	if (getSecond()==0) {
		setMinute((getMinute() + 1) % 60);
		if (getMinute() == 0) {
			setHour((getHour() + 1) % 24);
		}
	}
}

int DateAndTime::monthDays(int month) {
    if (month >= 1 && month <= 12) {
        if (month == 2){
            if(leapYear()) return 29;
            else return 28;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
        else return 31;
    }
    return 0;
}

bool DateAndTime::leapYear() {
    if(year % 4 == 0) return 1;
    else return 0;
}

