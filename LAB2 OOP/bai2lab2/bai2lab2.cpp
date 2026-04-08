#include "bai2lab2.hpp"
#include <iostream>
#include <cmath>
using namespace std;

// Hàm tìm UCLN
int UCLN(int a, int b) {
    if (b == 0) return a;
    return UCLN(b, a % b);
}

void PhanSo::Nhap() {
    cout << "Nhap tu: ";
    cin >> iTu;
    do {
        cout << "Nhap mau (khac 0): ";
        cin >> iMau;
    } while (iMau == 0);
}

void PhanSo::Xuat() {
    cout << iTu << "/" << iMau;
}

void PhanSo::RutGon() {
    int ucln = UCLN(abs(iTu), abs(iMau));
    iTu /= ucln;
    iMau /= ucln;
    
    // Đưa dấu về tử
    if (iMau < 0) {
        iTu = -iTu;
        iMau = -iMau;
    }
}

PhanSo PhanSo::Tong(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iMau + ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Hieu(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iMau - ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Tich(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iTu;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Thuong(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iMau;
    kq.iMau = iMau * ps.iTu;
    kq.RutGon();
    return kq;
}
int PhanSo::SoSanh(PhanSo ps) {
    int giaTriA = iTu * ps.iMau;
    int giaTriB = ps.iTu * iMau;
    
    if (giaTriA > giaTriB) {
        return 1;
    } else if (giaTriA < giaTriB) {
        return -1;
    } else {
        return 0;
    }
}
