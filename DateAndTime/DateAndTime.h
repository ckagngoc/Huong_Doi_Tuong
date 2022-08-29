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

/*Constructor nhận vào các đối số và kiểm tra xem có hợp lệ không, nếu không thì gán mặc định là 1-1-1900 và 0:0:0*/
DateAndTime::DateAndTime(int day, int month, int year, int hour, int minute, int second) {
    if(day > 0 || day < 32) this->day = day; //Kiểm tra ngày hợp lệ hay không
    else this->day = 1;
    if(month > 0 || month < 13) this->month = month; // Kiểm tra tháng hợp lệ hay không
    else this->month = 1;
    if(year > 0) this->year = year; // Kiểm tra năm hợp lệ hay không
    else this->year = 1900;
    if(hour >= 0 || hour < 24) this->hour = hour; // Kiểm tra giờ hợp lệ hay không
    else this->hour = 0;
    if(minute >= 0 || minute < 60) this->minute = minute; // Kiểm tra phút hợp lệ hay không
    else this->minute = 0;
    if(second >= 0 || second < 60) this->second = second; // Kiểm tra giây hợp lệ hay không
    else this->second = 0;
}

/*Hàm nhận vào đối số ngày tháng năm, kiểm tra và gán cho các thuộc tính tương ứng*/
void DateAndTime::setDate(int day, int month, int year) {
    if(day > 0 || day < 32) this->day = day;
    else this->day = 1;
    if(month > 0 || month < 13) this->month = month;
    else this->month = 1;
    this->year = year;
}

/*Hàm nhận vào đối số ngày, kiểm tra và gán cho thuộc tính tương ứng*/
void DateAndTime::setDay(int day) {
    if(day > 0 || day < 32) this->day = day;
    else this->day = 1;
}
/*Hàm nhận vào đối số tháng, kiểm tra và gán cho thuộc tính tương ứng*/
void DateAndTime::setMonth(int month) {
    if(month > 0 || month < 13) this->month = month;
    else this->month = 1;
}
/*Hàm nhận vào đối số năm, kiểm tra và gán cho thuộc tính tương ứng*/
void DateAndTime::setYear(int year) {
    this->year = year;
}
/*get*/
int DateAndTime::getDay() {
    return day;
}
/*get*/
int DateAndTime::getMonth() {
    return month;
}
/*get*/
int DateAndTime::getYear() {
    return year;
}
/*Hàm tìm ngày tiếp theo*/
void DateAndTime::nextDay() {
    if(leapYear()) { // Kiểm tra năm nhuận hay không
        if(month == 2) {
            if(day == monthDays(2)) { // Nếu nhuận và ngày là cuối của tháng 2 thì day = 1, ++month
                day = 1;
                month++;
            } else day++; // Nếu không thì ++day
        }
    } else {
        if(month == 2 ) {
            if(day == monthDays(2)) { // Nếu không nhuận ngày là cuối của tháng 2 thì day = 1, ++month
                day = 1;
                month++;
            } else day++; // Nếu không thì ++day
        }
    }
    if(month == 12 && day == monthDays(12)) { //Nếu là ngày cuối tháng 12 thì day = 1, month = 1, ++year
        day = 1;
        month = 1;
        year++;
    } else if(day == monthDays(month)) { // Nếu là ngày cuối tháng thì day = 1, month++
        day = 1;
        month++;
    } else {
        day++; // Nếu không thì chỉ cộng ngày
    }
}
/*Hàm nhận vào đối số giờ phút giây, kiểm tra và gán cho các thuộc tính tương ứng*/
void DateAndTime::setTime(int hour, int minute, int second) {
    if(hour >= 0 || hour < 24) this->hour = hour;
    else this->hour = 0;
    if(minute >= 0 || minute < 60) this->minute = minute;
    else this->minute = 0;
    if(second >= 0 || second < 60) this->second = second;
    else this->second = 0;
}
/*Hàm nhận vào đối số giờ, kiểm tra và gán cho thuộc tính tương ứng*/
void DateAndTime::setHour(int hour) {
    if(hour >= 0 || hour < 24) this->hour = hour;
    else this->hour = 0;
}
/*Hàm nhận vào đối số phút, kiểm tra và gán cho thuộc tính tương ứng*/
void DateAndTime::setMinute(int minute) {
    if(minute >= 0 || minute < 60) this->minute = minute;
    else this->minute = 0;
}
/*Hàm nhận vào đối số giây, kiểm tra và gán cho thuộc tính tương ứng*/
void DateAndTime::setSecond(int second) {
    if(second >= 0 || second < 60) this->second = second;
    else this->second = 0;
}
/*Get*/
int DateAndTime::getHour() {
    return hour;
}
/*Get*/
int DateAndTime::getMinute() {
    return minute;
}
/*Get*/
int DateAndTime::getSecond() {
    return second;
}
/*In ra mặc định theo format
1-1-1900
0:0:0
*/
void DateAndTime::printStandard() {
    cout <<day<<"-"<<month<<"-"<<year<<endl;
    cout <<hour<<":"<<minute<<":"<<second<<endl;
}
/*
In ra time theo format
0:0:0
*/
void DateAndTime::printTime() {
    cout <<hour<<":"<<minute<<":"<<second<<endl;
}
/*Tăng thời gian lên 1 giây*/
void DateAndTime::tick() {
    setSecond((second + 1 ) % 60); // tăng giây lên 1 bằng cách chia lấy dư cho 60
	if (second==0) { // Nếu giây chia hết cho 60
		setMinute((minute + 1) % 60); // Thì phút tăng lên 1
		if (minute == 0) { // Nếu phút chia hết cho 60
			setHour((hour + 1) % 24); //Thì tăng giờ lên 1
		}
	}
}
/*Hàm trả về ngày cuối cùng trong tháng*/
int DateAndTime::monthDays(int month) {
    if (month >= 1 && month <= 12) {
        if (month == 2){
            if(leapYear()) return 29; //Kiểm tra coi tháng 2 năm nhuận không
            else return 28;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
        else return 31;
    }
    return 0;
}
/*Hàm kiểm tra năm nhuận*/
bool DateAndTime::leapYear() {
    if(year % 4 == 0) return 1;
    else return 0;
}

