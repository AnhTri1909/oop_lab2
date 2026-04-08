#ifndef bai3lab2_h
#define bai3lab2_h

class SoPhuc {
private:
    double iThuc;
    double iAo;

public:
    void Nhap();
    void Xuat();
    
    SoPhuc Tong(SoPhuc sp);
    SoPhuc Hieu(SoPhuc sp);
    SoPhuc Tich(SoPhuc sp);
    SoPhuc Thuong(SoPhuc sp);
};

#endif // !bai3lab2_h
