#pragma once

class PhanSo {
private:
    int TuSo, MauSo;
public:
    PhanSo();
    PhanSo(int x, int y);
    bool operator < (const PhanSo& a) const;
    void Nhap();
    void Xuat();
};
