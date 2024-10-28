#include <iostream>
#include <algorithm>
#include <cmath>
#include "DaGiac.h"

// @brief Constructor khởi tạo đa giác với số lượng đỉnh cho trước.
// @param n Số lượng đỉnh của đa giác
DaGiac::DaGiac(int n) {
    dinh.reserve(n); // Dự trữ bộ nhớ cho n đỉnh
}

// @brief Nhập tọa độ cho các đỉnh của đa giác từ đầu vào.
// Yêu cầu người dùng nhập x và y cho mỗi đỉnh.
void DaGiac::NhapToaDo() {
    for (int i = 0; i < dinh.capacity(); ++i) {
        float x, y;
        std::cin >> x >> y; 
        dinh.emplace_back(x, y); 
    }
}

// @brief Tính diện tích của đa giác bao lồi từ các đỉnh đã nhập.
// @return Diện tích của đa giác bao lồi
float DaGiac::TinhDienTichBaoLoi() {
    std::sort(dinh.begin(), dinh.end(), compareDiem); 

    std::vector<Diem> hull; 
    // Tính toán đỉnh dưới của bao lồi
    for (const auto &p : dinh) {
        while (hull.size() >= 2 && crossProduct(hull[hull.size() - 2], hull[hull.size() - 1], p) <= 0) {
            hull.pop_back();
        }
        hull.push_back(p);
    }

    int hullSize = hull.size(); 
    // Tính toán đỉnh trên của bao lồi
    for (int i = dinh.size() - 2; i >= 0; --i) {
        while (hull.size() > hullSize && crossProduct(hull[hull.size() - 2], hull[hull.size() - 1], dinh[i]) <= 0) {
            hull.pop_back(); 
        }
        hull.push_back(dinh[i]); 
    }

    hull.pop_back(); 

    // Tính diện tích của đa giác bao lồi
    float dienTich = 0;
    int n = hull.size();
    for (int i = 0; i < n; ++i) {
        int j = (i + 1) % n; 
        dienTich += hull[i].x * hull[j].y - hull[i].y * hull[j].x; 
    }
    return std::fabs(dienTich) / 2; 
}
