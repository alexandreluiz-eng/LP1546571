#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    char cor[20];
    char tamanho;
} Camiseta;

int comparar(const void *a, const void *b) {
    Camiseta *c1 = (Camiseta *)a;
    Camiseta *c2 = (Camiseta *)b;

    // Ordena pela cor
    int corCmp = strcmp(c1->cor, c2->cor);
    if (corCmp != 0)
        return corCmp;

    // Ordena pelo tamanho (G > M > P)
    if (c1->tamanho != c2->tamanho)
        return c2->tamanho - c1->tamanho;

    // Ordena pelo nome
    return strcmp(c1->nome, c2->nome);
}

int main() {
    int N;
    int primeiro = 1;

    while (scanf("%d", &N) && N != 0) {
        getchar();

        Camiseta camisetas[60];

        for (int i = 0; i < N; i++) {

            fgets(camisetas[i].nome, sizeof(camisetas[i].nome), stdin);

            camisetas[i].nome[strcspn(camisetas[i].nome, "\n")] = '\0';

            scanf("%s %c", camisetas[i].cor, &camisetas[i].tamanho);
            getchar();
        }

        qsort(camisetas, N, sizeof(Camiseta), comparar);

        if (!primeiro)
            printf("\n");

        primeiro = 0;

        for (int i = 0; i < N; i++) {
            printf("%s %c %s\n",
                   camisetas[i].cor,
                   camisetas[i].tamanho,
                   camisetas[i].nome);
        }
    }

    return 0;
}
