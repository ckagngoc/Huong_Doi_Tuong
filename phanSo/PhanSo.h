// file name: PhanSo.h
// Header for class PhanSo
// author: Pham Duc Minh - BDATTT56

class PhanSo {
private:
	int ts, ms;
public:
	PhanSo();
	PhanSo(int, int);
	bool Check();
	friend ostream &operator<<(ostream&, const PhanSo); // cout << PhanSo
	friend istream &operator>>(istream&, PhanSo&); // cin >> PhanSo
	void ToiGian();
	PhanSo operator+(PhanSo); // PhanSo + PhanSo
	PhanSo operator-(PhanSo); // PhanSo - PhanSo
	PhanSo operator*(PhanSo); // PhanSo * PhanSo
	PhanSo operator/(PhanSo); // PhanSo / PhanSo
};

/*Hàm trả về ước chung lớn nhất của hai param*/
int UCLN(int a, int b) {
	int m = abs(a);
	int n = abs(b);
	while(m!=n)
	{
		if(m>n) m -= n;
		else n -= m;
	}
	return n;
}

/*Constructor không tham số*/
PhanSo::PhanSo() {
	this->ts = 0;
	this->ms =1;
} 

/*Constructor có tham số*/
PhanSo::PhanSo(int ts, int ms) {
	this->ts = ts;
	this->ms = ms;
	if(this->ms == 0)
	  this->ms = 1;
}

//Hàm check mẫu khác không
bool PhanSo::Check() {
	if(this->ms==0) return false;
	return true;
}

//Hàm nạp chồng toán tử << của luồng ostream
ostream &operator<<(ostream& os, const PhanSo p) {
	if(p.ts==0) os<<0<<"\n";
	else if(p.ts==p.ms) os<<1<<"\n";
	else
		os<<p.ts<<"/"<<p.ms<<"\n";
	return os;
}

//Hàm  nạp chồng toán tử >> của luồng istream
istream &operator>>(istream& is, PhanSo& p) {
	do{
		cout<<"Nhap tu so: ";
		is>>p.ts;
		cout<<"Nhap mau so: ";
		is>>p.ms;
		if(p.Check()==false)
			cout<<"Vui long nhap lai!\n";
	}while(p.Check()==false);
	return is;
}

//Hàm tối giản phân số
void PhanSo::ToiGian() {
	int c = UCLN(ts,ms);
	ts = ts/c;
	ms = ms/c;
}

//Nạp chồng toán tử +
PhanSo PhanSo::operator+(PhanSo p) {
	PhanSo p1;
	p1.ts = ts*p.ms + ms*p.ts;
	p1.ms = ms * p.ms;
	if(p1.ts!=0)
		p1.ToiGian();
	return p1;
}

//Nạp chồng toán tử -
PhanSo PhanSo::operator-(PhanSo p) {
	PhanSo p1;
	p1.ts = ts * p.ms - ms * p.ts;
	p1.ms = ms * p.ms;
	if(p1.ts!=0)
		p1.ToiGian();
	return p1;
}

//Nạp chồng toán tử *
PhanSo PhanSo::operator*(PhanSo p) {
	PhanSo p1;
	p1.ts = ts*p.ts;
	p1.ms = ms*p.ms;
	if(p1.ts!=0)
		p1.ToiGian();
	return p1;
}

//Nạp chồng toán tử /
PhanSo PhanSo::operator/(PhanSo p) {
	PhanSo p1;
	if (p.ts==0)
	{
		p1.ts = 0;
		p1.ms = 1;
		return p1;
	}
	int temp = p.ts;
	p.ts = p.ms;
	p.ms = temp;
	
	p1.ts = ts*p.ts;
	p1.ms = ms*p.ms;
	if(p1.ts!=0)
		p1.ToiGian();
	return p1;
}