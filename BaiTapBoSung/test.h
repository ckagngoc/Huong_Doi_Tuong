void testDate() {
    int day, month, year;
    cout <<"Day: ";
    cin >> day;
    cout <<"Month: ";
    cin >>month;
    cout <<"Year: ";
    cin >>year;
    Date date(day, month, year);
    date.displayDate();
    cout << "\npass Date\n";
    system("pause");
    system("cls");
}

void testTime() {
    int hours, minutes, inc;
    cout << "Hours: ";
    cin >> hours;
    cout << "Minutes: ";
    cin >> minutes;
    Time time(hours,minutes);
    time.displayTime();
    cout <<"Inc: ";
    cin >> inc;
    Time other = time.incrementTime(inc);
    other.displayTime();
    cout << "\npass Time\n";
    system("pause");
    system("cls");
}

void testPerson() {
    string first, last, zip;
    cout << "First: ";
    fflush(stdin);
    getline(cin,first);
    fflush(stdin);
    cout << "Last: ";
    getline(cin,last);
    fflush(stdin);
    cout << "Zip code: ";
    getline(cin,zip);
    Person ps(first, last, zip);
    ps.displayPerson();
    cout << "\npass Person\n";
    system("pause");
    system("cls");
}

void testMagazineSubscription() {
    string first, last, zip;
    int day, month, year, day1, month1, year1;
    cout << "First name subscriber: ";
    fflush(stdin);
    getline(cin,first);
    cout << "Last name subscriber: ";
    fflush(stdin);
    getline(cin,last);
    cout << "Zip code by subscriber: ";
    fflush(stdin);
    getline(cin,zip);
    cout << "Day subscription start: ";
    cin >> day;
    cout << "Month subscription start: ";
    cin >> month;
    cout << "Year subscription start: ";
    cin >> year;
    cout << "Day expiration dates: ";
    cin >> day1;
    cout << "Day expiration dates: ";
    cin >> month1;
    cout << "Day expiration dates: ";
    cin >> year1;
    cout << "\n--------------------------------------------------------\n";
    MagazineSubscription mg(first,last,zip,day,month,year,day1,month1,year1);
    mg.displayMagazineSubscription();
    cout << "\npass MagazineSubscription\n";
    system("pause");
    system("cls");
}

void testDentalAppointment() {
    string first, last, zip;
    int day, month, year, hours, minutes, duration;
    cout << "First name patient: ";
    fflush(stdin);
    getline(cin,first);
    cout << "Last name patient: ";
    fflush(stdin);
    getline(cin,last);
    cout << "Zip code by patient: ";
    fflush(stdin);
    getline(cin,zip);
    cout << "Day date: ";
    cin >> day;
    cout << "Month date: ";
    cin >> month;
    cout << "Year date: ";
    cin >> year;
    cout << "Hours: ";
    cin >> hours;
    cout << "Minutes: ";
    cin >> minutes;
    cout << "Duration: ";
    cin >> duration;
    cout << "\n--------------------------------------------------------\n";
    DentalAppointment da(first,last,zip,day,month,year,hours,minutes,duration);
    da.displayAppointment();
    cout << "\npass DentalAppointment\n";
    system("pause");
    system("cls");
}

