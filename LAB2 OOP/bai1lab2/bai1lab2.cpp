#include "bai1lab2.h"
#include <iostream>

using namespace std;

//kiểm tra năm nhuận
bool NgayThangNam::KiemTraNamNhuan(int nam) {
    return (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0);
}

//Tính số ngày trong một tháng
int NgayThangNam::TinhSoNgayTrongThang(int thang, int nam) {
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return KiemTraNamNhuan(nam) ? 29 : 28;
        default:
            return 0;
    }
}

void NgayThangNam::Nhap() {
    cout << "Nhap nam: ";
    cin >> iNam;
    
    do {
        cout << "Nhap thang (1-12): ";
        cin >> iThang;
    } while (iThang < 1 || iThang > 12);

    int soNgayToiDa = TinhSoNgayTrongThang(iThang, iNam);
    do {
        cout << "Nhap ngay (1-" << soNgayToiDa << "): ";
        cin >> iNgay;
    } while (iNgay < 1 || iNgay > soNgayToiDa);
}

void NgayThangNam::Xuat() {
    cout << iNgay << "/" << iThang << "/" << iNam;
}

// Tăng ngày lên 1, nếu vượt quá số ngày của tháng thì reset ngày về 1 và tăng tháng.
// Nếu tháng vượt quá 12 thì reset tháng về 1 và tăng năm.
NgayThangNam NgayThangNam::NgayThangNamTiepTheo() {
    NgayThangNam ngayMoi = *this;
    
    ngayMoi.iNgay++;
    
    int soNgayToiDa = TinhSoNgayTrongThang(ngayMoi.iThang, ngayMoi.iNam);
    
    if (ngayMoi.iNgay > soNgayToiDa) {
        ngayMoi.iNgay = 1;
        ngayMoi.iThang++;
        if (ngayMoi.iThang > 12) {
            ngayMoi.iThang = 1;
            ngayMoi.iNam++;
        }
    }
    
    return ngayMoi;
}
