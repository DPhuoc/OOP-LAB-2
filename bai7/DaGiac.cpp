#include <iostream>
#include <algorithm>
#include <cmath>
#include "DaGiac.h"

DaGiac::DaGiac(int n) {
    dinh.reserve(n);
}

void DaGiac::NhapToaDo() {
    for (int i = 0; i < dinh.capacity(); ++i) {
        float x, y;
        std::cin >> x >> y;
        dinh.emplace_back(x, y);
    }
}

float DaGiac::TinhDienTichBaoLoi() {
    std::sort(dinh.begin(), dinh.end(), compareDiem);

    std::vector<Diem> hull;
    for (const auto &p : dinh) {
        while (hull.size() >= 2 && crossProduct(hull[hull.size() - 2], hull[hull.size() - 1], p) <= 0) {
            hull.pop_back();
        }
        hull.push_back(p);
    }
    int hullSize = hull.size();
    for (int i = dinh.size() - 2; i >= 0; --i) {
        while (hull.size() > hullSize && crossProduct(hull[hull.size() - 2], hull[hull.size() - 1], dinh[i]) <= 0) {
            hull.pop_back();
        }
        hull.push_back(dinh[i]);
    }
    hull.pop_back(); 

    float dienTich = 0;
    int n = hull.size();
    for (int i = 0; i < n; ++i) {
        int j = (i + 1) % n;
        dienTich += hull[i].x * hull[j].y - hull[i].y * hull[j].x;
    }
    return std::fabs(dienTich) / 2;
}
