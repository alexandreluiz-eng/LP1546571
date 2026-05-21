#include <stdio.h>

int main() {
    int par[5], impar[5];
    int cp = 0, ci = 0;
    int valor;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &valor);

        if (valor % 2 == 0) {
            par[cp++] = valor;

            if (cp == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                cp = 0;
            }
        } else {
            impar[ci++] = valor;

            if (ci == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                ci = 0;
            }
        }
    }

    for (int j = 0; j < ci; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }

    for (int j = 0; j < cp; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}
