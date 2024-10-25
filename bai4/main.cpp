#include <iostream>
#include "ThiSinh.h"

int main() {
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;
    cin.ignore();

    ThiSinh* thiSinhs = new ThiSinh[n]; 

    for (int i = 0; i < n; ++i) {
        cout << "\nNhap thong tin thi sinh thu " << i + 1 << ":\n";
        thiSinhs[i].Nhap();
    }

    cout << "\nDanh sach thi sinh co tong diem lon hon 15:\n";
    for (int i = 0; i < n; ++i) {
        if (thiSinhs[i].Tong() > 15) {
            thiSinhs[i].Xuat();
            cout << endl;
        }
    }

    int indexMax = 0;
    for (int i = 1; i < n; ++i) {
        if (thiSinhs[i].Tong() > thiSinhs[indexMax].Tong()) {
            indexMax = i;
        }
    }

    cout << "\nThi sinh co tong diem cao nhat la:\n";
    thiSinhs[indexMax].Xuat();

    delete[] thiSinhs;

    return 0;
}