#include <iostream>
#include "Tamgiac.cpp"

int main() {
    TamGiac tg;

    tg.Nhap();

    cout << "Tam giac ban dau:" << endl;
    tg.Xuat();

    tg.TinhTien(2, 2);
    cout << "Tam giac sau khi tinh tien (2, 2):" << endl;
    tg.Xuat();

    tg.PhongTo(2);
    cout << "Tam giac sau khi phong to 2 lan:" << endl;
    tg.Xuat();

    tg.Quay(45);
    cout << "Tam giac sau khi quay 45 do:" << endl;
    tg.Xuat();

    return 0;
}