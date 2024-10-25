#include "Diem.h"

Diem::Diem(float x, float y) : x(x), y(y) {}

void Diem::TinhTien(float dx, float dy) {
    x += dx;
    y += dy;
}

float Diem::getX() const {
    return x;
}

float Diem::getY() const {
    return y;
}