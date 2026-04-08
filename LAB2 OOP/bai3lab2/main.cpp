#include <iostream>
#include "bai3lab2.h"

using namespace std;

int main() {
    SoPhuc sp1, sp2;

    cout << "Nhap so phuc 1\n";
    sp1.Nhap();

    cout << "\nNhap so phuc 2\n";
    sp2.Nhap();

    cout << "So phuc 1: "; sp1.Xuat(); cout << endl;
    cout << "So phuc 2: "; sp2.Xuat(); cout << endl;

    SoPhuc tong = sp1.Tong(sp2);
    SoPhuc hieu = sp1.Hieu(sp2);
    SoPhuc tich = sp1.Tich(sp2);
    SoPhuc thuong = sp1.Thuong(sp2);

    cout << "Tong   = "; tong.Xuat(); cout << endl;
    cout << "Hieu   = "; hieu.Xuat(); cout << endl;
    cout << "Tich   = "; tich.Xuat(); cout << endl;
    cout << "Thuong = "; thuong.Xuat(); cout << endl;

    return 0;
}
