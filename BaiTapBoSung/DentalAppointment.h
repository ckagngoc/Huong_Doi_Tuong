// file name: DentalAppointment.h
// header and method of class DentalAppointment
// author: Pham Duc Minh - BDATTT

class DentalAppointment {
private:
    /* data */
    Person patient;
    Date date;
    Time time;
    int duration; // < 240
public:
    DentalAppointment(string = "x",string = "x",string = "x",
    int = 1,int = 1,int = 1,int = 0,int = 0,int = 0);
    void displayAppointment();
};
//-------------------------------------------------------------------------------------------------
DentalAppointment::DentalAppointment(string first, string last, string zip, int day, int month, int year, int hours, int minutes, int duration) :
patient(first,last,zip),date(day,month,year),time(hours,minutes),duration(duration) {
    if(duration >= 240) this->duration = 0;
}

void DentalAppointment::displayAppointment(){
    Time other = time.incrementTime(duration);
    cout <<"patient { ";
    patient.displayPerson();
    cout << "} made an appointment at ";
    time.displayTime();
    cout <<" to examine him/her for "<<duration<<" minutes to ";
    other.displayTime();
    cout <<" on ";
    date.displayDate();
    cout <<"\n";
}

