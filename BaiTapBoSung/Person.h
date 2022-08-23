// file name: Person.h
// header and method of class Person
// author: Pham Duc Minh - BDATTT

class Person {
    private:
        /* data */
        string firstName;
        string lastName;
        string zipCode;
    public:
        Person(string = "x", string = "x", string = "x");// Ngam dinh
        void displayPerson();//Name : firstName lastName
};
//-------------------------------------------------------------------------------------------------
Person::Person(string first, string last, string zip) : firstName(first), lastName(last), zipCode(zip) {}

void Person::displayPerson() {
    cout <<firstName<<" "<<lastName<<" "<<zipCode;
}