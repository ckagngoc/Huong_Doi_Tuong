// file name : menu.h
// Xây dựng menu
// Au thờ: Phạm Đức Minh

char menu_cal(char c) { //Me niu tính toán
    if (c == 'y') {
        while (c == 'y')
        {
            /* code */
            system("cls");
            cout << "------------------------Caculator two fractions------------------------";
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
        return c;
    }
}

char menu_cmp(char c) { // Me niu so sánh với 1
    while (c == 'y')
    {
        /* code */
        system("cls");
        cout << "------------------------Compare fraction with 1------------------------\n";
        PhanSo a;
        cout << "Nhap phan so can so sanh: \n";
        cin >> a;
        if(a > 1 ) cout << "\nPhan so lon hon 1 !!!";
        else if(a == 1) cout << "\nPhan so bang 1 !!!";
        else cout << "\nPhan so nho 1 !!!";
        cout << "\nDo you want try again !!! (y or n): ";
        cin >> c;
    }
    return 'y';
}

void menu() { // Me niu hiện hành
    char c = 'y';
    int a;
    while (true)
    {
        system("cls");
        cout << "-------------------Chuong trinh thu nghiem voi phan so---------------";
        cout << "\n1 - Caculator two fractions.";
        cout << "\n2 - Compare fraction with 1.";
        cout << "\nother - Exit.";
        cout << "\n-----------------------------------------------------";
        cout << "\nYour choose ? ";
        cin >> a;
        /* code */
        switch (a)
        {
        case 1:
            /* code */
            menu_cal(c);
            break;
        case 2:
            menu_cmp(c);
            break;
        default:
            exit(1);
            break;
        }
    }
    
}