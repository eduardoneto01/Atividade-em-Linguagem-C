#include <stdio.h>

int main() {
    int num;
    long long fatorial = 1;

    do {
        printf("Digite um numero inteiro entre 0 e 10: ");
        scanf("%d", &num);

        if (num < 0 || num > 10) {
            printf("Valor invalido! Tente novamente.\n");
        }
    } while (num < 0 || num > 10);

    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }

    printf("Saida: %d! = %lld\n", num, fatorial);

    return 0;
}
