#include <bits/stdc++.h>

using namespace std;


int a[30][30], m, n;

// Ham kiem tra hinh chu nhat tu (x_one, y_one) den (x_true, y_true)
bool check(int x_one, int y_one, int x_two, int y_two) {
    for (int x = x_one; x <= x_two; x++) {
        for (int y = y_one; y <= y_two; y++) {
            if (a[x][y] == 0)
                return false;
        }
    }
    return true;
}

int main() {
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    vector < pair < pair<int, int> , pair<int, int> > > ans;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int x = i + 1; x <= n; x++)
                for (int y = j + 1; y <= n; y++)
                    if (check(i, j, x, y)) {
                        cout << i << " " << j << " " << (x - i + 1) << " " << (y - j + 1) << "\n";
                    }
    return 0;
}
