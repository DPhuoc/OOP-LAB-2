#include <iostream>
#include "Diem.h"

using namespace std;

// @brief Constructor mặc định khởi tạo điểm tại gốc tọa độ (0, 0).
Diem::Diem() : iHoanh(0), iTung(0) {}

// @brief Constructor khởi tạo điểm với hoành độ và tung độ cho trước.
// @param Hoanh Giá trị hoành độ của điểm
// @param Tung Giá trị tung độ của điểm
Diem::Diem(float Hoanh, float Tung) : iHoanh(Hoanh), iTung(Tung) {}

// @brief Constructor sao chép, khởi tạo điểm với giá trị từ điểm khác.
// @param x Đối tượng Diem cần sao chép
Diem::Diem(const Diem &x) : iHoanh(x.iHoanh), iTung(x.iTung) {}

// @brief Lấy tung độ của điểm.
// @return Giá trị tung độ
float Diem::GetTungDo() {
    return iTung;
}

// @brief Lấy hoành độ của điểm.
// @return Giá trị hoành độ
float Diem::GetHoanhDo() {
    return iHoanh;
}

// @brief Đặt tung độ của điểm.
// @param Tung Giá trị tung độ mới
void Diem::SetTungDo(float Tung) {
    iTung = Tung;
}

// @brief Đặt hoành độ của điểm.
// @param Hoanh Giá trị hoành độ mới
void Diem::SetHoanhDo(float Hoanh) {
    iHoanh = Hoanh;
}

// @brief Dịch chuyển điểm theo khoảng dx và dy.
// @param dX Khoảng dịch chuyển theo trục x
// @param dY Khoảng dịch chuyển theo trục y
void Diem::TinhTien(float dX, float dY) {
    iHoanh += dX;
    iTung += dY;
}

// @brief Nhập hoành độ và tung độ của điểm từ bàn phím.
void Diem::Nhap() {
    cout << "Nhap hoanh do: ";
    cin >> iHoanh;
    cout << "Nhap tung do: ";
    cin >> iTung;
}

// @brief Xuất tọa độ của điểm ra màn hình.
void Diem::Xuat() {
    cout << "(" << iHoanh << ", " << iTung << ")" << endl;
}

// @brief Đặt điểm về gốc tọa độ (0, 0).
void Diem::GanGoc() {
    iHoanh = 0;
    iTung = 0;
}

// @brief Nhân đôi tọa độ của điểm.
void Diem::NhanDoi() {
    iHoanh *= 2;
    iTung *= 2;
}
