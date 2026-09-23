#include <stdio.h>

int main() {
    int num;
    char resp;

    do {
        printf("\nDigite um numero inteiro para ver a tabuada: ");
        scanf("%d", &num);

        for (int i = 1; i <= 10; i++) {
            printf("%d x %2d = %d\n", num, i, num * i);
        }

        printf("\nDeseja calcular a tabuada de outro numero? (S/N): ");
        scanf(" %c", &resp);

    } while (resp == 'S' || resp == 's');

    return 0;
}
