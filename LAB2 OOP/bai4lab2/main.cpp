#include <iostream>
#include "bai4lab2.h"

using namespace std;

int main() {
    GioPhutGiay time;
    time.Nhap();
    cout << "\nThoi gian hien tai: ";
    time.Xuat();
    GioPhutGiay nextTime = time.TinhCongThemMotGiay();
    cout << "\nThoi gian sau 1 giay: ";
    nextTime.Xuat();
    cout << "\n\n";

    return 0;
}
