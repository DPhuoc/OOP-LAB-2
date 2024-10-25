#include <iostream>
#include "ThiSinh.h"

using namespace std;

void ThiSinh::Nhap() {
    cout << "Nhap ten: ";
    getline(cin, Ten);
    cout << "Nhap MSSV: ";
    cin >> MSSV;
    cout << "Nhap ngay sinh (dd mm yyyy): ";
    cin >> iNgay >> iThang >> iNam;
    cout << "Nhap diem Toan: ";
    cin >> fToan;
    cout << "Nhap diem Van: ";
    cin >> fVan;
    cout << "Nhap diem Anh: ";
    cin >> fAnh;
    cin.ignore();
}

void ThiSinh::Xuat() {
    cout << "-------------------------" << MSSV << "----------------------\n";
    cout << "Ten: " << Ten << endl;
    cout << "Ngay sinh: " << iNgay << "/" << iThang << "/" << iNam << endl;
    cout << "Diem Toan: " << fToan << endl;
    cout << "Diem Van: " << fVan << endl;
    cout << "Diem Anh: " << fAnh << endl;
    cout << "Tong diem: " << Tong() << endl;
    cout << endl;
}

float ThiSinh::Tong() {
    return fToan + fVan + fAnh;
}