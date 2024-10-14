#include <bits/stdc++.h>
#include "PhanSo.h"

using namespace std;

int getbit(int mask, int k) {
    return ((mask >> k) & 1);
}

int main() {
    int n;
    cin >> n;
    PhanSo a[n + 2];
    for (int i = 1; i <= n; i++) {
        a[i].Nhap();
    }
    sort(a + 1, a + 1 + n);

    PhanSo Pur;
    Pur.Nhap();
    vector<PhanSo> ans;

    for (int MASK = 0; MASK < (1 << n); MASK++) {
        PhanSo Cur(1, 1);
        vector <PhanSo> res;
        for (int i = 0; i < n; i++)
            if (getbit(MASK, i)) {
                Cur = Cur * a[i + 1];
                res.push_back(a[i + 1]);
            }
        if (Cur == Pur) {
            if (ans.size() == 0 || ans.size() > res.size())
                ans = res;
        }
    }

    for (auto Cur : ans)
        Cur.Xuat();
    return 0;
}
