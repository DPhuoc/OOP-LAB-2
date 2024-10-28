#include <iostream>
#include <cmath>
#include "TamGiac.h"

using namespace std;

// @brief Constructor mặc định khởi tạo tam giác với các đỉnh A, B, C có tọa độ (0, 0).
TamGiac::TamGiac() : A(0, 0), B(0, 0), C(0, 0) {}

// @brief Constructor khởi tạo tam giác với các đỉnh A, B, C cho trước.
// @param a Điểm A
// @param b Điểm B
// @param c Điểm C
TamGiac::TamGiac(Diem a, Diem b, Diem c) : A(a), B(b), C(c) {}

// @brief Nhập tọa độ các đỉnh của tam giác từ bàn phím.
void TamGiac::Nhap() {
    cout << "Nhap toa do dinh A: \n"; A = Diem(); A.Nhap();
    cout << "Nhap toa do dinh B: \n"; B = Diem(); B.Nhap();
    cout << "Nhap toa do dinh C: \n"; C = Diem(); C.Nhap();
    cout << "\n";
}

// @brief Xuất tọa độ các đỉnh của tam giác ra màn hình.
void TamGiac::Xuat() {
    cout << "Toa do dinh A: "; A.Xuat();
    cout << "Toa do dinh B: "; B.Xuat();
    cout << "Toa do dinh C: "; C.Xuat();
}

// @brief Dịch chuyển tam giác theo khoảng dx và dy.
// @param dx Khoảng dịch chuyển theo trục x
// @param dy Khoảng dịch chuyển theo trục y
void TamGiac::TinhTien(float dx, float dy) {
    A.TinhTien(dx, dy);
    B.TinhTien(dx, dy);
    C.TinhTien(dx, dy);
}

// @brief Phóng to tam giác theo tỷ lệ factor.
// @param factor Hệ số phóng to
void TamGiac::PhongTo(float factor) {
    A.SetHoanhDo(A.GetHoanhDo() * factor); A.SetTungDo(A.GetTungDo() * factor);
    B.SetHoanhDo(B.GetHoanhDo() * factor); B.SetTungDo(B.GetTungDo() * factor);
    C.SetHoanhDo(C.GetHoanhDo() * factor); C.SetTungDo(C.GetTungDo() * factor);
}

// @brief Thu nhỏ tam giác theo tỷ lệ factor (ngược lại của PhongTo).
// @param factor Hệ số thu nhỏ
void TamGiac::ThuNho(float factor) {
    PhongTo(1.0 / factor);  
}

// @brief Quay tam giác quanh gốc tọa độ một góc angle độ.
// @param angle Góc quay tính bằng độ
void TamGiac::Quay(float angle) {
    float rad = angle * M_PI / 180.0; // Chuyển đổi góc từ độ sang radian

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
