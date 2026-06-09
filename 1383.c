#include <iostream>
#include <vector>
using namespace std;

bool verificaSudoku(int mat[9][9]) {
    // Verificar linhas
    for (int i = 0; i < 9; i++) {
        vector<int> freq(10, 0);

        for (int j = 0; j < 9; j++) {
            int x = mat[i][j];
            if (x < 1 || x > 9) return false;
            freq[x]++;
        }

        for (int k = 1; k <= 9; k++)
            if (freq[k] != 1) return false;
    }

    // Verificar colunas
    for (int j = 0; j < 9; j++) {
        vector<int> freq(10, 0);

        for (int i = 0; i < 9; i++) {
            int x = mat[i][j];
            freq[x]++;
        }

        for (int k = 1; k <= 9; k++)
            if (freq[k] != 1) return false;
    }

    // Verificar blocos 3x3
    for (int li = 0; li < 9; li += 3) {
        for (int cj = 0; cj < 9; cj += 3) {

            vector<int> freq(10, 0);

            for (int i = li; i < li + 3; i++) {
                for (int j = cj; j < cj + 3; j++) {
                    freq[mat[i][j]]++;
                }
            }

            for (int k = 1; k <= 9; k++)
                if (freq[k] != 1) return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    for (int inst = 1; inst <= n; inst++) {
        int mat[9][9];

        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                cin >> mat[i][j];

        cout << "Instancia " << inst << "\n";

        if (verificaSudoku(mat))
            cout << "SIM\n\n";
        else
            cout << "NAO\n\n";
    }

    return 0;
}
