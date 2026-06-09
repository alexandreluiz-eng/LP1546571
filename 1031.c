#include <iostream>
using namespace std;

bool ok(int n, int m) {
    int pos = 0;

    for (int alive = n; alive > 1; alive--) {
        pos = (pos + m - 1) % alive;

        if (pos < 12)
            return false;
    }

    return true;
}

int ans[101];

int main() {
    for (int n = 13; n <= 100; n++) {
        int m = 1;
        while (!ok(n - 1, m))
            m++;
        ans[n] = m;
    }

    int n;
    while (cin >> n && n) {
        cout << ans[n] << '\n';
    }

    return 0;
}
