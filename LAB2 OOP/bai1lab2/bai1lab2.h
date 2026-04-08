#ifndef bai1lab2_h
#define bai1lab2_h

class NgayThangNam {
private:
    int iNgay;
    int iThang;
    int iNam;
    bool KiemTraNamNhuan(int nam);
    int TinhSoNgayTrongThang(int thang, int nam);

public:
    void Nhap();
    void Xuat();
    NgayThangNam NgayThangNamTiepTheo();
};

#endif // !bai1lab2_h
