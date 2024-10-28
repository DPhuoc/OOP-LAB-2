#include <iostream>
#include "DaGiac.h"

int main() {
    int n;
    std::cin >> n;

    if (n <= 2) {
        std::cout << "So diem phai lon hon 2.\n";
        return 1;
    }

    DaGiac daGiac(n);
    daGiac.NhapToaDo();

    std::cout << daGiac.TinhDienTichBaoLoi() << std::endl;

    return 0;
}
