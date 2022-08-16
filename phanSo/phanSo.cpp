// file name : phanSo.cpp

/*Bai tập phân số sử dụng struct lưu tử số, mẫu số, phần nguyên của nó, hiển thị 
giá trị của phân số, xác định xem phân số có lớn hơn ă không, thực hiện phép toán cộng, nhân*/

#include "include.h"
#include "phanSo.h"


int main() {
    char c = 'y';
    while (c == 'y')
    {
        /* code */
        system("cls");
        cout << "-------------------Chuong trinh thu nghiem voi phan so---------------";
        PhanSo a,b;
        cout << "\nPhan so thu nhat: \n";
        cin >> a;
        cout << "\nPhan so thu hai: \n";
        cin >> b;
        cout << "-------------------------------KET QUA--------------------------------\n";
        /* cout << "Phan so thu nhat la: " << a;
        cout << "Phan so thu hai la: " << b; */
        cout << "Tong a + b: " << a+b;
        cout << "Hieu a - b: " << a-b;
        cout << "Tich a * b: " << a*b;
        cout << "Thuong a / b: " << a/b;
        cout << "\nDo you want try again !!! (y or n): ";
        cin >> c;
    }
    
    return 0;
}
//-------------------------------------------------------------------------------