#include <iostream>
#include "DaGiac.h"
using namespace std;

int main() {
    DaGiac dg;
    dg.Nhap();

    cout << "Da giac ban dau:" << endl;
    dg.Xuat();

    dg.TinhTien(2, 3);
    cout << "Da giac sau khi tinh tien (2, 3):" << endl;
    dg.Xuat();

    dg.PhongTo(2);
    cout << "Da giac sau khi phong to 2 lan:" << endl;
    dg.Xuat();

    dg.Quay(45);
    cout << "Da giac sau khi quay 45 do:" << endl;
    dg.Xuat();

    return 0;
}