#include <stdio.h>

int main() {
    int num;
    char resp;

    do {
        int divisores = 0;

        printf("\nDigite um numero inteiro positivo: ");
        scanf("%d", &num);

        if (num <= 0) {
            printf("Numero invalido!\n");
        } else {
            for (int i = 1; i <= num; i++) {
                if (num % i == 0) {
                    divisores++;
                }
            }

            if (divisores == 2) {
                printf("O numero %d e PRIMO.\n", num);
            } else {
                printf("O numero %d NAO e primo.\n", num);
            }
        }

        printf("Deseja testar outro numero? (S/N): ");
        scanf(" %c", &resp);

    } while (resp == 'S' || resp == 's');

    return 0;
}
