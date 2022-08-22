#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int, int);
void euclidMoRong(int, int, int*, int*);

int main() {
    int a,b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    if(__gcd(a,b) == gcd(a,b)){
        cout <<"pass - 1";
    }
    int s, t;
    euclidMoRong(a,b,&s,&t);
    cout << "s: "<<s<<"\tt: "<<t<<endl;
    return 0;
}

int gcd(int a, int b) {
    while (a != 0) {
	    int t = b % a;
	    b = a;
	    a = t;
	}
    return b;
}

void euclidMoRong(int a, int b, int *s, int *t){
    int q,r,xr,yr;
    int m = a;
    int n = b;
    int xm = 1, ym = 0;
    cout <<"\n-------------------------------------------------"<<endl;
    cout <<"m: "<<m<<"\tq: 0"<<"\tx: "<<xm<<"\ty: "<<ym<<endl;
    int xn = 0, yn = 1;
    cout <<"m: "<<n<<"\tq: 0"<<"\tx: "<<xn<<"\ty: "<<yn<<endl;
    while(n != 0) {
        q = m / n; //Chia lay phan nguyen
        r = m % n; //Chia lay du
        xr = xm - q*xn;
        yr = ym - q*yn;
        m = n;
        xm = xn;
        ym = yn;
        n = r;
        xn = xr;
        yn = yr;
        cout <<"m: "<<n<<"\tq: "<<q<<"\tx: "<<xn<<"\ty: "<<yn<<endl;
    }
    cout <<"-------------------------------------------------"<<endl;
    *s = xm;
    *t = ym; // m = gcd(a,b) = xm * a + ym * b
}