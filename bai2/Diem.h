#pragma one

class Diem {
private:
    float iHoanh, iTung;

public:
    Diem();
    Diem(float Hoanh, float Tung); 
    Diem(const Diem &x); 

    void Nhap();
    void Xuat();

    float GetTungDo();
    float GetHoanhDo();
    void SetTungDo(float Tung); 
    void SetHoanhDo(float Hoanh);

    void TinhTien(float dx, float dy);
};