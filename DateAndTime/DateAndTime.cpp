#include "include.h"
#include "DateAndTime.h"

DateAndTime::DateAndTime(int day, int month, int year, int hour, int minute, int second) {
    if(day > 0 && day < 32) this->day = day;
    else this->day = 1;
    if(month > 0 && month < 13) this->month = month;
    else this->month = 1;
    if(year > 0) this->year = year;
    else this->year = 1900;
    if(hour >= 0 && hour < 24) this->hour = hour;
    else this->hour = 0;
    if(minute >= 0 && minute < 60) this->minute = minute;
    else this->minute = 0;
    if(second >= 0 && second < 60) this->second = second;
    else this->second = 0;
}

void DateAndTime::setDate(int day, int month, int year) {
    if(day > 0 && day < 32) this->day = day;
    else this->day = 1;
    if(month > 0 && month < 13) this->month = month;
    else this->month = 1;
    this->year = year;
}

void DateAndTime::setDay(int day) {
    if(day > 0 && day < 32) this->day = day;
    else this->day = 1;
}

void DateAndTime::setMonth(int month) {
    if(month > 0 && month < 13) this->month = month;
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
    if(year%4 == 0) {
        if(month == 2 ) {
            if(day == 29) {
                day = 1;
                month++;
            }
        } else if(month == 12 && day == 31) {
            day = 1;
            month = 1;
            year++;
        } else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 && day == 31) {
            day = 1;
            month++;
        } else if(month == 4 || month == 6 || month == 9 || month == 11 && day == 30) {
            day = 1;
            month++;
        } else {
            day++;
            month++;
        }
    } else {
        if(month == 2 ) {
            if(day == 28) {
                day = 1;
                month++;
            }
        } else if(month == 12 && day == 31) {
            day = 1;
            month = 1;
            year++;
        } else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 && day == 31) {
            day = 1;
            month++;
        } else if(month == 4 || month == 6 || month == 9 || month == 11 && day == 30) {
            day = 1;
            month++;
        } else {
            day++;
            month++;
        }
    }
}

void DateAndTime::setTime(int hour, int minute, int second) {
    if(hour >= 0 && hour < 24) this->hour = hour;
    else this->hour = 0;
    if(minute >= 0 && minute < 60) this->minute = minute;
    else this->minute = 0;
    if(second >= 0 && second < 60) this->second = second;
    else this->second = 0;
}

void DateAndTime::setHour(int hour) {
    if(hour >= 0 && hour < 24) this->hour = hour;
    else this->hour = 0;
}

void DateAndTime::setMinute(int minute) {
    if(minute >= 0 && minute < 60) this->minute = minute;
    else this->minute = 0;
}

void DateAndTime::setSecond(int second) {
    if(second >= 0 && second < 60) this->second = second;
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
    cout << "Date: { Day: "<<day<<", Month: "<<month<<", Year: "<<year<<" }"<<endl;
    cout << "Time: { Hour: "<<hour<<", Minute: "<<minute<<", Second: "<<second<<" }"<<endl;
}
void printMilitary();
int monthDays();
void tick();
bool leapYear();