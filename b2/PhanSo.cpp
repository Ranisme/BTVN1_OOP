#include "PhanSo.h"
#include <bits/stdc++.h>

using namespace std;

void PhanSo :: Nhap() {
    cin >> Tu;
    cin >> Mau;
}

void PhanSo :: Xuat() {
    cout << Tu << " / " << Mau << '\n';
}

bool PhanSo :: operator < (const PhanSo& other) const {
    return Tu * other.Mau < Mau * other.Tu;
}



