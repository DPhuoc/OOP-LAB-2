#pragma once
#include "Diem.h"

class DaGiac {
private:
    int n;     
    Diem *Dinh;    

public:
    DaGiac(); 
    DaGiac(int soDinh); 
    ~DaGiac();  

    void Nhap();  
    void Xuat();

    void TinhTien(float dx, float dy); 
    void PhongTo(float factor);   
    void ThuNho(float factor);       
    void Quay(float angle);      
};