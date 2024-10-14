#include "PhanSo.h"
#include <bits/stdc++.h>

using namespace std;

PhanSo :: PhanSo() {
    Tu = 0;
    Mau = 0;
}

PhanSo :: PhanSo(int x, int y) {
    Tu = x;
    Mau = y;
}

bool PhanSo :: operator < (const PhanSo& a) const {
    return (Tu * a.Mau < a.Tu * Mau);
}

bool PhanSo :: operator == (const PhanSo& a) const {
    return (Tu * a.Mau == a.Tu * Mau);
}

PhanSo PhanSo :: operator * (const PhanSo& a) const {
    return PhanSo(Tu * a.Tu, Mau * a.Mau);
}

void PhanSo :: Nhap() {
    cin >> Tu;
    cin >> Mau;
}

void PhanSo :: Xuat() {
    cout << Tu << " / " << Mau << "\n";
}
