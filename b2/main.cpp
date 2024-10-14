#include "PhanSo.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    PhanSo a[n];
    for (int i = 0; i < n; i++)
        a[i].Nhap();
    sort(a + 0, a + 0 + n);
    if (n >= k) {
        a[n - k].Xuat();
        a[k - 1].Xuat();
    }
    return 0;
}
