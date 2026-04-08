#include <iostream>
#include "bai1lab2.h"

using namespace std;

int main() {
    NgayThangNam date;
        date.Nhap();
        cout << "\nNgay ban nhap: ";
    date.Xuat();
    
    NgayThangNam nextDate = date.NgayThangNamTiepTheo();
    
    cout << "\nNgay tiep theo la: ";
    nextDate.Xuat();
    cout << "\n\n";
    
    return 0;
}
