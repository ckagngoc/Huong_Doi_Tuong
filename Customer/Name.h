class Name {
private:
    /* data */
    string first;
    string middle;
    string last;
public:
    Name(string, string, string);
    void displayFullName();
};

Name::Name(string first, string middle, string last) {
    this->first = first;
    this->middle = middle;
    this->last = last;
}

void Name::displayFullName() {
    cout << first <<" "<<middle<<" "<<last<< endl;
}
