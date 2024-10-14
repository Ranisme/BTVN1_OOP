#include "PhanSo.h"
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so phan so : ";
    cin >> n;
    PhanSo a[n];
    for (int i = 0; i < n; i++)
        a[i].Nhap();
    sort(a + 0, a + 0 + n);
    a[0].Xuat(); a[1].Xuat();
    return 0;
}
