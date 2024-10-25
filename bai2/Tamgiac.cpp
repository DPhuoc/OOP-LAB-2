#include <iostream>
#include <cmath>
#include "Tamgiac.h"

using namespace std;

TamGiac::TamGiac() : A(0, 0), B(0, 0), C(0, 0) {}

TamGiac::TamGiac(Diem a, Diem b, Diem c) : A(a), B(b), C(c) {}

void TamGiac::Nhap() {
    cout << "Nhap toa do dinh A: \n";
    A = Diem();
    A.Nhap();
    cout << "Nhap toa do dinh B: \n";
    B = Diem();
    B.Nhap();
    cout << "Nhap toa do dinh C: \n";
    C = Diem();
    C.Nhap();
    cout << "\n";
}

void TamGiac::Xuat() {
    cout << "Toa do dinh A: "; A.Xuat();
    cout << "Toa do dinh B: "; B.Xuat();
    cout << "Toa do dinh C: "; C.Xuat();
}

void TamGiac::TinhTien(float dx, float dy) {
    A.TinhTien(dx, dy);
    B.TinhTien(dx, dy);
    C.TinhTien(dx, dy);
}

void TamGiac::PhongTo(float factor) {
    A.SetHoanhDo(A.GetHoanhDo() * factor);
    A.SetTungDo(A.GetTungDo() * factor);
    B.SetHoanhDo(B.GetHoanhDo() * factor);
    B.SetTungDo(B.GetTungDo() * factor);
    C.SetHoanhDo(C.GetHoanhDo() * factor);
    C.SetTungDo(C.GetTungDo() * factor);
}

void TamGiac::ThuNho(float factor) {
    PhongTo(1.0 / factor);  
}

void TamGiac::Quay(float angle) {
    float rad = angle * M_PI / 180.0; 

    auto QuayDiem = [rad](Diem &d) {
        float xNew = d.GetHoanhDo() * cos(rad) - d.GetTungDo() * sin(rad);
        float yNew = d.GetHoanhDo() * sin(rad) + d.GetTungDo() * cos(rad);
        d.SetHoanhDo(xNew);
        d.SetTungDo(yNew);
    };

    QuayDiem(A);
    QuayDiem(B);
    QuayDiem(C);
}