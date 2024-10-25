#include <iostream>
#include "Diem.h"

using namespace std;

Diem::Diem() : iHoanh(0), iTung(0) {}

Diem::Diem(float Hoanh, float Tung) : iHoanh(Hoanh), iTung(Tung) {}

Diem::Diem(const Diem &x) : iHoanh(x.iHoanh), iTung(x.iTung) {}

float Diem::GetTungDo() {
    return iTung;
}

float Diem::GetHoanhDo() {
    return iHoanh;
}

void Diem::SetTungDo(float Tung) {
    iTung = Tung;
}

void Diem::SetHoanhDo(float Hoanh) {
    iHoanh = Hoanh;
}

void Diem::TinhTien(float dX, float dY) {
    iHoanh += dX;
    iTung += dY;
}

void Diem::Nhap() {
    cout << "Nhap hoanh do: ";
    cin >> iHoanh;
    cout << "Nhap tung do: ";
    cin >> iTung;
}

void Diem::Xuat() {
    cout << "(" << iHoanh << ", " << iTung << ")" << endl;
}


