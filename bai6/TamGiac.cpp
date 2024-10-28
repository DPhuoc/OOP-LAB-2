#include <iostream>
#include <cmath>
#include "TamGiac.h"

#define PI 3.14

// @brief Constructor khởi tạo tam giác với ba đỉnh cho trước.
// @param a Điểm A của tam giác
// @param b Điểm B của tam giác
// @param c Điểm C của tam giác
TamGiac::TamGiac(Diem a, Diem b, Diem c) : A(a), B(b), C(c) {}

// @brief Dịch chuyển toàn bộ tam giác theo hướng và khoảng cách xác định.
// @param goc Góc dịch chuyển theo độ (0-360), với 0 độ theo trục x dương
// @param khoangCach Khoảng cách dịch chuyển theo hướng của góc
void TamGiac::TinhTien(float goc, float khoangCach) {
    float radian = goc * (PI / 180.0);
    float dx = khoangCach * cos(radian); 
    float dy = khoangCach * sin(radian); 

    A.TinhTien(dx, dy); 
    B.TinhTien(dx, dy); 
    C.TinhTien(dx, dy); 
}

// @brief Xuất tọa độ của ba đỉnh của tam giác ra màn hình.
void TamGiac::Xuat() {
    A.Xuat(); 
    B.Xuat(); 
    C.Xuat(); 
}
