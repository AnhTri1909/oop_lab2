#include "bai3lab2.h"
#include <iostream>

using namespace std;

void SoPhuc::Nhap() {
    cout << "Nhap phan thuc: ";
    cin >> iThuc;
    cout << "Nhap phan ao: ";
    cin >> iAo;
}

void SoPhuc::Xuat() {
    if (iAo < 0) {
        cout << iThuc << " - " << -iAo << "i";
    } else if (iAo == 0) {
        cout << iThuc; // Nếu phần ảo = 0 thì chỉ in phần thực
    } else {
        cout << iThuc << " + " << iAo << "i";
    }
}

SoPhuc SoPhuc::Tong(SoPhuc sp) {
    SoPhuc kq;
    kq.iThuc = iThuc + sp.iThuc;
    kq.iAo = iAo + sp.iAo;
    return kq;
}

SoPhuc SoPhuc::Hieu(SoPhuc sp) {
    SoPhuc kq;
    kq.iThuc = iThuc - sp.iThuc;
    kq.iAo = iAo - sp.iAo;
    return kq;
}

SoPhuc SoPhuc::Tich(SoPhuc sp) {
    SoPhuc kq;
    kq.iThuc = iThuc * sp.iThuc - iAo * sp.iAo;
    kq.iAo = iThuc * sp.iAo + iAo * sp.iThuc;
    return kq;
}

SoPhuc SoPhuc::Thuong(SoPhuc sp) {
    SoPhuc kq;
    // Mẫu số chung: c^2 + d^2
    double mauSo = sp.iThuc * sp.iThuc + sp.iAo * sp.iAo;
    
    if (mauSo == 0) {
        cout << "[Loi] Khong the chia cho 0!" << endl;
        kq.iThuc = 0;
        kq.iAo = 0;
        return kq;
    }
    
    kq.iThuc = (iThuc * sp.iThuc + iAo * sp.iAo) / mauSo;
    kq.iAo = (iAo * sp.iThuc - iThuc * sp.iAo) / mauSo;
    return kq;
}
