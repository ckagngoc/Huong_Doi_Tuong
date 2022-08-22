class Pizza {
    private:
        string topping;
        int diameter;
        double price;
        const static string STDTOP;
        const static int STDSIZE;
        const static double STDPRICE;
    public:
        Pizza(const string = STDTOP, const int = STDSIZE, const double = STDPRICE);
        void setValues();
        void displayValues();
};

const string Pizza::STDTOP = "cheese";
const int Pizza::STDSIZE = 12;
const double Pizza::STDPRICE = 8.99;

Pizza::Pizza(const string top, const int size, const double price) {
    topping = top;
    diameter = size;
    this->price = price;
}

void Pizza::displayValues() {
    cout <<"a " << diameter << " inch "<<topping<<" pizza. Price $"<<price<<endl;
}

void Pizza::setValues(){
	const double TOPPINGPREMIUM=1.00;
	const double SIZEPREMIUM=1.50;
	cout<<"Enter topping ";
	cin >> topping;
	if(topping !=STDTOP)
		price = STDPRICE + TOPPINGPREMIUM;
	cout <<"Enter size ";
	cin >>diameter;
	if(diameter > STDSIZE)
		price += SIZEPREMIUM;
}

