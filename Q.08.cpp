#include <stdio.h>

int main() {
    int num;
    int somaPos = 0, somaNeg = 0;
    int qtdPos = 0, qtdNeg = 0;

    printf("Digite varios numeros inteiros (0 para encerrar):\n");

    do {
        scanf("%d", &num);

        if (num > 0) {
            somaPos += num;
            qtdPos++;
        } else if (num < 0) {
            somaNeg += num;
            qtdNeg++;
        }
    } while (num != 0);

    printf("\nSoma dos positivos: %d\n", somaPos);
    printf("Soma dos negativos: %d\n", somaNeg);
    printf("Quantidade de positivos: %d\n", qtdPos);
    printf("Quantidade de negativos: %d\n", qtdNeg);

    return 0;
}
