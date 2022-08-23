// file name: Time.h
// header and method of class Time
// author: Pham Duc Minh - BDATTT

class Time {
    private:
        /* data */
        int hours;
        int minutes;
    public:
        Time(int = 0, int = 0);
        void displayTime(); // ex: 12:30
        Time incrementTime(int min);// ex: 30 minutes
};
//-------------------------------------------------------------------------------------------------
Time::Time(int hours, int minutes) : hours(hours), minutes(minutes) {
    if(hours > 23 || hours < 0) this->hours = 0;
    if(minutes > 59 || minutes < 0) this->minutes = 0;
}

void Time::displayTime() {
    cout <<hours<<":"<<minutes;
}

Time Time::incrementTime(int min) {
    int h = hours + min / 60; //If min > 60 minutes
    int m = minutes + min % 60; // If min > 60 minutes
    if(m >= 60) { //If this minutes after increment >= 60
        h++;
        m-=60;
    }
    Time other(h, m); // Create new Time
    return other; // Return new Time
}

