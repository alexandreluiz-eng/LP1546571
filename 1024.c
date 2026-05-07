#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N;
    char texto[1001];

    scanf("%d", &N);
    getchar();

    while (N--) {

        int tam, i;
        char temp;

        fgets(texto, sizeof(texto), stdin);

        tam = strlen(texto);

        if (texto[tam - 1] == '\n') {
            texto[tam - 1] = '\0';
            tam--;
        }

        /* 1ª passada */
        for (i = 0; i < tam; i++) {
            if (isalpha(texto[i])) {
                texto[i] = texto[i] + 3;
            }
        }

        /* 2ª passada */
        for (i = 0; i < tam / 2; i++) {
            temp = texto[i];
            texto[i] = texto[tam - 1 - i];
            texto[tam - 1 - i] = temp;
        }

        /* 3ª passada */
        for (i = tam / 2; i < tam; i++) {
            texto[i] = texto[i] - 1;
        }

        printf("%s\n", texto);
    }

    return 0;
}
