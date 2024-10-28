#include <iostream>
#include "Diem.h"

using namespace std;

// @brief Constructor mặc định khởi tạo iHoanh và iTung bằng 0.
Diem::Diem() : iHoanh(0), iTung(0) {}

// @brief Constructor khởi tạo iHoanh và iTung với các giá trị cho trước.
// @param Hoanh Giá trị của tọa độ x
// @param Tung Giá trị của tọa độ y
Diem::Diem(float Hoanh, float Tung) : iHoanh(Hoanh), iTung(Tung) {}

// @brief Constructor sao chép từ một đối tượng Diem khác.
// @param x Đối tượng Diem cần sao chép
Diem::Diem(const Diem &x) : iHoanh(x.iHoanh), iTung(x.iTung) {}

// @brief Lấy giá trị của tọa độ y.
// @return Giá trị của iTung
float Diem::GetTungDo() {
    return iTung;
}

// @brief Lấy giá trị của tọa độ x.
// @return Giá trị của iHoanh
float Diem::GetHoanhDo() {
    return iHoanh;
}

// @brief Đặt giá trị mới cho tọa độ y.
// @param Tung Giá trị cần gán cho iTung
void Diem::SetTungDo(float Tung) {
    iTung = Tung;
}

// @brief Đặt giá trị mới cho tọa độ x.
// @param Hoanh Giá trị cần gán cho iHoanh
void Diem::SetHoanhDo(float Hoanh) {
    iHoanh = Hoanh;
}

// @brief Dịch chuyển điểm theo khoảng dX và dY.
// @param dX Khoảng dịch chuyển theo trục x
// @param dY Khoảng dịch chuyển theo trục y
void Diem::TinhTien(float dX, float dY) {
    iHoanh += dX;
    iTung += dY;
}

// @brief In tọa độ của điểm ra màn hình dưới dạng (iHoanh, iTung).
void Diem::Xuat() {
    cout << "(" << iHoanh << ", " << iTung << ")" << endl;
}