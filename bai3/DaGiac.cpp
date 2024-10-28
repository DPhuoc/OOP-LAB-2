#include <iostream>
#include <cmath>
#include "DaGiac.h"

using namespace std;

// @brief Constructor mặc định khởi tạo đa giác rỗng với số đỉnh là 0.
DaGiac::DaGiac() : n(0), Dinh(nullptr) {}

// @brief Constructor khởi tạo đa giác với số đỉnh cho trước.
// @param soDinh Số lượng đỉnh của đa giác
DaGiac::DaGiac(int soDinh) : n(soDinh) {
    Dinh = new Diem[n]; 
}

// @brief Destructor giải phóng bộ nhớ đã cấp phát cho mảng đỉnh của đa giác.
DaGiac::~DaGiac() {
    delete[] Dinh; 
}

// @brief Nhập số đỉnh và tọa độ từng đỉnh của đa giác từ bàn phím.
void DaGiac::Nhap() {
    cout << "Nhap so dinh cua da giac: ";
    cin >> n;
    Dinh = new Diem[n]; 

    for (int i = 0; i < n; ++i) {
        cout << "Nhap toa do dinh thu " << i + 1 << ": \n";
        Dinh[i].Nhap();
    }
}

// @brief Xuất tọa độ từng đỉnh của đa giác ra màn hình.
void DaGiac::Xuat() {
    for (int i = 0; i < n; ++i) {
        cout << "Toa do dinh thu " << i + 1 << ": ";
        Dinh[i].Xuat();
    }
}

// @brief Dịch chuyển toàn bộ đa giác theo khoảng dx và dy.
// @param dx Khoảng dịch chuyển theo trục x
// @param dy Khoảng dịch chuyển theo trục y
void DaGiac::TinhTien(float dx, float dy) {
    for (int i = 0; i < n; ++i) {
        Dinh[i].TinhTien(dx, dy);
    }
}

// @brief Phóng to đa giác theo tỷ lệ factor.
// @param factor Hệ số phóng to
void DaGiac::PhongTo(float factor) {
    for (int i = 0; i < n; ++i) {
        Dinh[i].SetHoanhDo(Dinh[i].GetHoanhDo() * factor);
        Dinh[i].SetTungDo(Dinh[i].GetTungDo() * factor);
    }
}

// @brief Thu nhỏ đa giác theo tỷ lệ factor (ngược lại của PhongTo).
// @param factor Hệ số thu nhỏ
void DaGiac::ThuNho(float factor) {
    PhongTo(1.0 / factor); 
}

// @brief Quay đa giác quanh gốc tọa độ một góc angle độ.
// @param angle Góc quay tính bằng độ
void DaGiac::Quay(float angle) {
    float rad = angle * M_PI / 180.0; // Chuyển đổi từ độ sang radian

    for (int i = 0; i < n; ++i) {
        float x = Dinh[i].GetHoanhDo();
        float y = Dinh[i].GetTungDo();
        Dinh[i].SetHoanhDo(x * cos(rad) - y * sin(rad));
        Dinh[i].SetTungDo(x * sin(rad) + y * cos(rad));
    }
}
