#include "Diem.h"

// @brief Constructor khởi tạo điểm với tọa độ x và y.
// @param x Giá trị tọa độ x của điểm
// @param y Giá trị tọa độ y của điểm
Diem::Diem(float x, float y) : x(x), y(y) {}

// @brief So sánh hai điểm dựa trên tung độ (y), nếu tung độ bằng nhau thì so sánh hoành độ (x).
// @param p1 Điểm thứ nhất để so sánh
// @param p2 Điểm thứ hai để so sánh
// @return True nếu điểm p1 có tung độ nhỏ hơn p2 hoặc có tung độ bằng nhau và hoành độ của p1 nhỏ hơn p2, ngược lại trả về False.
bool compareDiem(const Diem &p1, const Diem &p2) {
    return (p1.y < p2.y) || (p1.y == p2.y && p1.x < p2.x);
}

// @brief Tính tích chéo của ba điểm O, A, và B, sử dụng để xác định hướng của đoạn thẳng.
// @param O Điểm gốc
// @param A Điểm thứ nhất để tính tích chéo
// @param B Điểm thứ hai để tính tích chéo
// @return Giá trị tích chéo, dương nếu AB nằm về phía bên trái của OA, âm nếu AB nằm về phía bên phải, và 0 nếu O, A, B thẳng hàng.
float crossProduct(const Diem &O, const Diem &A, const Diem &B) {
    return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
}
