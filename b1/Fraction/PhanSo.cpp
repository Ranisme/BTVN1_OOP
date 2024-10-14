#include "PhanSo.h"
#include <bits/stdc++.h>

using namespace std;

PhanSo :: PhanSo() {
    TuSo = 0;
    MauSo = 0;
}

PhanSo :: PhanSo(int x, int y) {
    TuSo = x;
    MauSo = y;
}

bool PhanSo :: operator < (const PhanSo& a) const {
    return (TuSo * a.MauSo < a.TuSo * MauSo);
}

void PhanSo :: Nhap() {
    cout << "Nhap tu so : "; cin >> TuSo;
    while (true) {
        cout << "Nhap mau so : "; cin >> MauSo;
        if (MauSo != 0)
            break;
        else
            cout << "Khong hop le moi nhap mau so khac 0";
    }
}

void PhanSo :: Xuat() {
    cout << TuSo << "/" << MauSo << "\n";
}
