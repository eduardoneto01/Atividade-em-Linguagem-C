#include <stdio.h>

int main() {
    int num, pares = 0, impares = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %d° numero inteiro: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            printf("%d e PAR\n", num);
            pares++;
        } else {
            printf("%d e IMPAR\n", num);
            impares++;
        }
    }

    printf("\nTotal de pares: %d\n", pares);
    printf("Total de impares: %d\n", impares);

    return 0;
}
