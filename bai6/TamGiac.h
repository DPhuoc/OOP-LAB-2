#pragma one

#include "Diem.h"

class TamGiac {
private:
    Diem A, B, C;

public:
    TamGiac(Diem a, Diem b, Diem c);
    void TinhTien(float goc, float khoangCach);
    void Xuat() const;
};