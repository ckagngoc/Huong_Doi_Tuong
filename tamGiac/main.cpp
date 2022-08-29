#include "gcclib.h"
#include "TamGiac.h"

int main() {
    TamGiac tg1(7, 9, 10);
    TamGiac tg2;
    tg1.displayTamGiac();
    tg2.displayTamGiac();
    if(tg1.check()) {
        cout << "Dien tich: " << tg1.dienTich() << "\nChu vi: " << tg1.chuVi() << endl;
    }
    return 0;
}