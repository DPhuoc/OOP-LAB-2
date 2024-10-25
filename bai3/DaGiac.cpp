#include <iostream>
#include <cmath>
#include "DaGiac.h"

using namespace std;

DaGiac::DaGiac() : n(0), Dinh(nullptr) {}

DaGiac::DaGiac(int soDinh) : n(soDinh) {
    Dinh = new Diem[n]; 
}

DaGiac::~DaGiac() {
    delete[] Dinh; 
}

void DaGiac::Nhap() {
    cout << "Nhap so dinh cua da giac: ";
    cin >> n;
    Dinh = new Diem[n]; 

    for (int i = 0; i < n; ++i) {
        cout << "Nhap toa do dinh thu " << i + 1 << ": ";
        Dinh[i].Nhap();
    }
}

void DaGiac::Xuat() {
    for (int i = 0; i < n; ++i) {
        cout << "Toa do dinh thu " << i + 1 << ": \n";
        Dinh[i].Xuat();
    }
}

void DaGiac::TinhTien(float dx, float dy) {
    for (int i = 0; i < n; ++i) {
        Dinh[i].TinhTien(dx, dy);
    }
}

void DaGiac::PhongTo(float factor) {
    for (int i = 0; i < n; ++i) {
        Dinh[i].SetHoanhDo(Dinh[i].GetHoanhDo() * factor);
        Dinh[i].SetTungDo(Dinh[i].GetTungDo() * factor);
    }
}

void DaGiac::ThuNho(float factor) {
    PhongTo(1.0 / factor); 
}

void DaGiac::Quay(float angle) {
    float rad = angle * M_PI / 180.0;

    for (int i = 0; i < n; ++i) {
        float x = Dinh[i].GetHoanhDo();
        float y = Dinh[i].GetTungDo();
        Dinh[i].SetHoanhDo(x * cos(rad) - y * sin(rad));
        Dinh[i].SetTungDo(x * sin(rad) + y * cos(rad));
    }
}