#pragma one

#include <vector>
#include "Diem.h"

class DaGiac {
private:
    std::vector<Diem> dinh;

public:
    DaGiac(int n);
    void NhapToaDo();
    float TinhDienTichBaoLoi();
};