#pragma one

class Diem {
public:
    float x, y;
    Diem(float x = 0, float y = 0);
};

bool compareDiem(const Diem &p1, const Diem &p2);
float crossProduct(const Diem &O, const Diem &A, const Diem &B);