#include <stdio.h>

int main() {

    long long h;

    while (1) {

        scanf("%lld", &h);

        if (h == 0)
            break;

        long long maior = h;

        while (h != 1) {

            if (h % 2 == 0)
                h = h / 2;
            else
                h = 3 * h + 1;

            if (h > maior)
                maior = h;
        }

        printf("%lld\n", maior);
    }

    return 0;
}
