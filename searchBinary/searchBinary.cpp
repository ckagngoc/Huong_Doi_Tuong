// filename: searchBinary.cpp

/*Cho dãy a gồm n phần tử, viết chương trình tìm kiếm trong dãy a có phần tử x hay không bằng thuật toán tìm kiếm nhị phân*/

// author: Pham Duc Minh

#include <iostream>
#include <stdlib.h>

using namespace std;

#define MAXSIZE 1000000
typedef int type;

void quick_sort(type*,type,type);
void swap(type*,type*);
type searchBinary(type*, type, type, type);

int main() {
    type x;
    int i,n;
    cout << "______________________________PHAM DUC MINH_________________________________";
    cout << "\n Nhap so luong phan tu: ";
    cin >> n; //Lấy số lượng phần tử mảng
    if(n>MAXSIZE) { //Kiểm tra coi có overflow không
        cout << "\n Memory overflow";
        exit(0); //Nếu có thì thoát
    }
    type a[n]; //Không thì tạo 1 mảng có số lượng phần tử như vừa nhập vào
    for(i = 0;i < n;++i) {
        cout <<" Nhap phan tu thu " << i << ": "; 
        cin >> a[i]; //Khởi tạo giá trị cho từng phần tử
    }
    //----------------------------sort------------------------------------------------
    quick_sort(a,0,n-1); //Sắp xếp mảng vừa nhập
    //----------------------------search-----------------------------------------------
    cout << " ___________________________________________________________________________";
    cout << "\n Nhap phan tu can tim: ";
    cin >> x ; //Lấy giá trị cần tìm ném vào x
    if(searchBinary(a,0,n-1,x) == -1) { //Tìm thử coi có không
        cout << "\n Phan tu " << x << " khong o trong mang !!!"; //Không có thì hiện thông báo   
    } else {
        cout << "\n Phan tu " << x << " o vi tri " << searchBinary(a,0,n-1,x) << " trong mang !!!"; //Có thì cũng hiện thông báo
    }
    return 0;
}
//-----------swap-----------------------
void swap(type *a, type *b) {
    type temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
//------------quick sort----------------
void quick_sort(type a[], type l, type r) {
    int vitri = (l+r)/2;
    type x = a[vitri]; //Gán x bằng giá trị ở giữa
    int i = l; //gán i = left
    int j = r; //gán j  = right
    do{
        while(a[i] < x) i++; //tìm phần tử lớn hơn hoặc bằng x
        while(a[j] > x) j--; //tìm phần tử nhỏ hơn hoặc bằng x
        if(i <= j) { //Nếu khác vị trí
            swap(&a[i], &a[j]); //Đổi chúng nó cho nhau
            i++; //Tiến i
            j--; //Lùi j
        } 
    } while(i <= j); //Nếu chúng nó chưa bước qua đời nhau
    if(l < j) quick_sort(a,l,j); // Đệ quy bên trái
    if(i < r) quick_sort(a,i,r); // Đệ quy bên phải
}
//----------searchBinary-------------------
type searchBinary(type* a, type l, type r, type x) { //Đưa vào mảng nè, giá trị đầu cuối và cái cần tìm
    type vitri = 0; // Gọi cái biến để thực hiện
    if(l>r) return -1; //Nếu giá trị trái phải đi qua đời nhau thì tức là không có, trả về -1
    vitri = (l+r)/2; // Gán cái vị trí bằng in đéc ở giữa
    if(a[vitri] == x) return vitri+1; // Thấy thì trả về vị trí 1-> 
    else if(a[vitri] > x) searchBinary(a,l,vitri-1,x); //Đệ quy trái
        else searchBinary(a,vitri+1,r,x); //Đệ quy phải
}
