// file name: MagazineSubscription.h
// header and method of class MagazineSubscription
// author: Pham Duc Minh - BDATTT

class MagazineSubscription {
    private:
        /* data */
        Person subscriber;
        Date subscriptionStart;
        Date expirationDates;
    public:
        MagazineSubscription(string = "x", string = "x", string = "x", 
        int = 1, int = 1, int = 2000, int = 1, int = 1, int = 2000);
        void displayMagazineSubscription();
};
//-------------------------------------------------------------------------------------------------
MagazineSubscription::MagazineSubscription(string firstName, string lastName, string zip, 
        int d, int m, int y, int day, int month, int year) : 
        subscriber(firstName, lastName, zip), subscriptionStart(d,m,y), expirationDates(day, month, year) {}

void MagazineSubscription::displayMagazineSubscription() {
    cout <<"Mr/Ms. ";
    subscriber.displayPerson();
    cout <<" subscribes to the magazine from ";
    subscriptionStart.displayDate();
    cout <<" to ";
    expirationDates.displayDate();
    cout << "\n";
}