#include <iostream>
using namespace std;

int main() {
    int NC;
    cin >> NC;

    for (int tc = 1; tc <= NC; tc++) {
        int n, k;
        cin >> n >> k;

        int josephus = 0; // J(1, k)

        for (int i = 2; i <= n; i++) {
            josephus = (josephus + k) % i;
        }

        cout << "Case " << tc << ": " << josephus + 1 << "\n";
    }

    return 0;
}
