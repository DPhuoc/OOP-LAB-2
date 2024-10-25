#include "Diem.h"

Diem::Diem(float x, float y) : x(x), y(y) {}

bool compareDiem(const Diem &p1, const Diem &p2) {
    return (p1.y < p2.y) || (p1.y == p2.y && p1.x < p2.x);
}

float crossProduct(const Diem &O, const Diem &A, const Diem &B) {
    return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
}
