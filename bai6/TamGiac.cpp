#include <iostream>
#include <cmath>
#include "TamGiac.h"

#define PI 3.14

TamGiac::TamGiac(Diem a, Diem b, Diem c) : A(a), B(b), C(c) {}

void TamGiac::TinhTien(float goc, float khoangCach) {
    float radian = goc * (PI / 180.0);
    float dx = khoangCach * cos(radian);
    float dy = khoangCach * sin(radian);

    A.TinhTien(dx, dy);
    B.TinhTien(dx, dy);
    C.TinhTien(dx, dy);
}

void TamGiac::Xuat() const {
    std::cout << "(" << A.getX() << "," << A.getY() << ")\n";
    std::cout << "(" << B.getX() << "," << B.getY() << ")\n";
    std::cout << "(" << C.getX() << "," << C.getY() << ")\n";
}
