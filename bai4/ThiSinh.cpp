#include <iostream>
#include "ThiSinh.h"

using namespace std;

// @brief Nhập thông tin thí sinh bao gồm tên, MSSV, ngày sinh, và điểm các môn Toán, Văn, Anh.
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

// @brief Xuất thông tin thí sinh bao gồm MSSV, tên, ngày sinh, điểm từng môn, và tổng điểm.
void ThiSinh::Xuat() {
    cout << "-------------------------" << MSSV << "----------------------" << endl;
    cout << "Ten: " << Ten << endl;               
    cout << "Ngay sinh: " << iNgay << "/" << iThang << "/" << iNam << endl; 
    cout << "Diem Toan: " << fToan << endl;        
    cout << "Diem Van: " << fVan << endl;        
    cout << "Diem Anh: " << fAnh << endl;       
    cout << "Tong diem: " << Tong() << endl;      
    cout << endl;
}

// @brief Tính tổng điểm của thí sinh.
// @return Tổng điểm của các môn Toán, Văn, Anh
float ThiSinh::Tong() {
    return fToan + fVan + fAnh;
}
