#pragma once

class PhanSo {
private:
    int Tu, Mau;
public:
    PhanSo();
    PhanSo(int x, int y);
    bool operator < (const PhanSo& a) const;
    bool operator == (const PhanSo& a) const;
    PhanSo operator * (const PhanSo&a) const;
    void Nhap();
    void Xuat();
};
