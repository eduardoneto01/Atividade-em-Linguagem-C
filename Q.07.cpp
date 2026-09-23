#include <stdio.h>

int main() {
    int num, maior, menor;

    printf("Digite o 1o numero inteiro: ");
    scanf("%d", &num);
    maior = num;
    menor = num;

    for (int i = 2; i <= 10; i++) {
        printf("Digite o %do numero inteiro: ", i);
        scanf("%d", &num);

        if (num > maior) maior = num;
        if (num < menor) menor = num;
    }

    printf("\nMaior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Diferenca (Maior - Menor): %d\n", maior - menor);

    return 0;
}
