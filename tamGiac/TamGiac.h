class TamGiac {
    private:
        float canh_1;
        float canh_2;
        float canh_3;
    public:
        TamGiac();
        TamGiac(float c1, float c2, float c3) : canh_1(c1), canh_2(c2), canh_3(c3) {};
        bool check();
        float chuVi();
        float dienTich();
        void displayTamGiac();
};
//------------------------------------------------------------------------------------------
bool TamGiac::check() {
    if(canh_1 + canh_2 <= canh_3) return 0;
    else if(canh_2 + canh_3 <= canh_1) return 0;
    else if(canh_3 + canh_1 <= canh_2) return 0;
}

float TamGiac::chuVi() {
    if(this->check()) {
        return canh_1 + canh_2 + canh_3;
    } 
}

float TamGiac::dienTich() {
    if(this->check()) {
        float p = this->chuVi() / 2;
        return sqrt(p*(p-canh_1)*(p-canh_2)*(p-canh_3));
    }
}

void TamGiac::displayTamGiac() {
    cout << "Tam giac: " << this << "{ canh 1: " << canh_1 << " , canh 2: "<< canh_2 <<" , canh 3: "<< canh_3 <<" }"<< endl;
}

TamGiac::TamGiac() {
    canh_1 = 0;
    canh_2 = 0;
    canh_3 = 0;
}