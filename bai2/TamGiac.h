#pragma once
#include "Diem.h"

class TamGiac {
private:
    Diem A, B, C;

public:
    TamGiac();
    TamGiac(Diem a, Diem b, Diem c);

    void Nhap();
    void Xuat();  

    void TinhTien(float dx, float dy);
    void PhongTo(float factor);    
    void ThuNho(float factor);     
    void Quay(float angle);        
};