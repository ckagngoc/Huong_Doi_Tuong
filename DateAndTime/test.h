// Test viết khá là ít của Phạm Đức Minh tự bịa và tự test
// !! Chưa test hết chức năng 
// author: Phạm Đức Minh
// ngày tạo 24/8/2022
bool testDateAndTime() {
    int day = 6;
    int month = 10;
    int year = 2002;
    int hour = 4;
    int minute = 30;
    int second = 42;
    DateAndTime dat(day,month,year,hour,minute,second);
    if(dat.getDay() == 6 && dat.getMonth() == 10 && dat.getYear() == 2002) cout <<"\npass - 1";
    if(dat.getHour() == 4 && dat.getMinute() == 30 && dat.getSecond() == 42) cout <<"\npass - 2";
    dat.setDay(12);
    dat.setMonth(11);
    dat.setYear(2010);
    if(dat.getDay() == 12 && dat.getMonth() == 11 && dat.getYear() == 2010) cout <<"\npass - 3";
    dat.setHour(3);
    dat.setMinute(40);
    dat.setSecond(4);
    if(dat.getHour() == 3 && dat.getMinute() == 40 && dat.getSecond() == 4) cout <<"\npass - 4";
    dat.nextDay();
    if(dat.getDay() == 13 && dat.getMonth() == 11 && dat.getYear() == 2010) cout <<"\npass - 5";
    dat.setDay(30);
    dat.nextDay();
    if(dat.getDay() == 1 && dat.getMonth() == 12 && dat.getYear() == 2010) cout <<"\npass - 6";
    dat.tick();
    if(dat.getHour() == 3 && dat.getMinute() == 40 && dat.getSecond() == 5) cout <<"\npass - 7";
    dat.setSecond(59);
    dat.tick();
    if(dat.getHour() == 3 && dat.getMinute() == 41 && dat.getSecond() == 0) cout <<"\npass - 8";
    dat.setDay(31);
    dat.setMonth(12);
    dat.setYear(2002);
    dat.nextDay();
    if(dat.getDay() == 1 && dat.getMonth() == 1 && dat.getYear() == 2003) cout <<"\npass - 9";
    dat.setSecond(59);
    dat.setMinute(59);
    dat.setHour(23);
    dat.tick();
    if(dat.getHour() == 0 && dat.getMinute() == 0 && dat.getSecond() == 0) cout <<"\npass - 10";
}