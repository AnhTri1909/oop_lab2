#include "bai4lab2.h"
#include <iostream>
#include <iomanip>
using namespace std;
void GioPhutGiay::Nhap() {
    // Ép người dùng nhập đúng định dạng 24h
    do {
        cout << "Nhap gio (0-23): ";
        cin >> iGio;
    } while (iGio < 0 || iGio > 23);

    do {
        cout << "Nhap phut (0-59): ";
        cin >> iPhut;
    } while (iPhut < 0 || iPhut > 59);

    do {
        cout << "Nhap giay (0-59): ";
        cin >> iGiay;
    } while (iGiay < 0 || iGiay > 59);
}

void GioPhutGiay::Xuat() {
    cout << setfill('0') << setw(2) << iGio << ":"
         << setfill('0') << setw(2) << iPhut << ":"
         << setfill('0') << setw(2) << iGiay;
}
GioPhutGiay GioPhutGiay::TinhCongThemMotGiay() {
    GioPhutGiay tgMoi = *this;
    
    tgMoi.iGiay++; // cộng thêm 1 giây
    
    // Xử lý tràn thời gian
    if (tgMoi.iGiay > 59) {
        tgMoi.iGiay = 0;   // Reset giây về 0
        tgMoi.iPhut++;     // Nhảy 1 phút
        
        if (tgMoi.iPhut > 59) {
            tgMoi.iPhut = 0; // Reset phút về 0
            tgMoi.iGio++;    // Nhảy 1 giờ
            
            if (tgMoi.iGio > 23) {
                tgMoi.iGio = 0; // 23:59:59 -> 00:00:00
            }
        }
    }
    
    return tgMoi;
}
