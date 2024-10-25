#pragma one

class Diem {
private:
    float x, y;

public:
    Diem(float x = 0, float y = 0);
    void TinhTien(float dx, float dy);
    
    float getX() const;
    float getY() const;
};