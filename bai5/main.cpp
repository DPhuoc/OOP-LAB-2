#include <iostream>
#include "Diem.h"

using namespace std;

int main() {
    Diem point;
    point.Nhap(); 

    int n;
    cout << "Nhap so luong chi thi: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int x;
        cout << "Nhap chi thi (1, 2, 3): ";
        cin >> x;

        switch (x) {
            case 1:
                point.NhanDoi();
                break;
            case 2:
                point.GanGoc();
                break;
            case 3: {
                int k;
                float d;
                cout << "\nNhap huong tịnh tien (0 theo truc x, khac 0 theo truc y): ";
                cin >> k;
                cout << "Nhap do tịnh tien d: ";
                cin >> d;

                if (k == 0) point.TinhTien(d, 0);
                else point.TinhTien(0, d);
                break;
            }

            default:
                cout << "Chi thi khong hop le" << endl;
                break;
        }
    }

    cout << "Toa do diem cuoi cung la: ";
    point.Xuat();

    return 0;
}