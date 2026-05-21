#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    char numero[110];

    for (int i = 0; i < N; i++) {
        scanf("%s", numero);

        int total = 0;

        for (int j = 0; j < strlen(numero); j++) {
            total += leds[numero[j] - '0'];
        }

        printf("%d leds\n", total);
    }

    return 0;
}
