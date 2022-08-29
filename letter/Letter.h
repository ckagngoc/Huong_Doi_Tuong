// file name: Letter.h
// header class Letter
// author : Pham Duc Minh - BDATTT56

class Letter {
    private:
        string title;
        string recipient;
        static int count;
    public:
        friend istream &operator>>(istream&, Letter&);
        void setRecipient(string, string);
        void displayGreeting();
        static void displayCount();
};
//-------------------------------------------------------------
istream &operator>>(istream& is, Letter& lt) {
    string a;
    char c = 'y';
    while (c == 'y')
    {
        /* code */
        //system("cls");
        cout << "Enter title for recipient: ";
        is >> lt.title;
        fflush(stdin);
        cout << "Enter last name of recipient: "; 
        is >> lt.recipient;
        fflush(stdin);
        if(lt.count == 0) {
            lt.displayGreeting();
            is >> a;
        }
        Letter::count++;
        lt.displayCount();
        fflush(stdin);
        cout << "\nDo you want to sent another (y - n): ";
        is >> c;
    }
    return is;
}

int Letter::count = 0;

void Letter::setRecipient(string title, string recipient) {
    this->title = title;
    this->recipient = recipient;
    Letter::count++;
} 

void Letter::displayGreeting() {
    cout << "\nDear "<<title<<". "<<recipient<<","<<endl; 
}

void Letter::displayCount() {
    cout << "Current count is: "<<count<<endl;
}