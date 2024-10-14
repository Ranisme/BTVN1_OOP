#pragma once
#include <bits/stdc++.h>

using namespace std;

class PhanSo {
private:
    int Tu, Mau;
public:
    void Nhap();
    void Xuat();
    bool operator < (const PhanSo& other) const;

};
