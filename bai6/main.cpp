#include <iostream>
// #include "Diem.h"
#include "TamGiac.h"
using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3, goc, khoangCach;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cin >> goc >> khoangCach;

    Diem A(x1, y1), B(x2, y2), C(x3, y3);
    TamGiac tg(A, B, C);

    tg.TinhTien(goc, khoangCach);
    tg.Xuat();

    return 0;
}
