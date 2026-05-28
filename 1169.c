#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        int X;
        scanf("%d", &X);

        unsigned long long graos;

        if (X == 64)
            graos = ~0ULL; // 2^64 - 1
        else
            graos = (1ULL << X) - 1;

        unsigned long long kg = graos / 12000;

        printf("%llu kg\n", kg);
    }

    return 0;
}
