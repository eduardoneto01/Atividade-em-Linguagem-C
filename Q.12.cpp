#include <stdio.h>

int main() {
    int numeroSecreto = 42; 
    int palpite, tentativas = 0, acertou = 0;
    int maxTentativas = 10;

    printf("JOGO DO NUMERO SECRETO (1 a 100)\n");

    while (tentativas < maxTentativas && !acertou) {
        tentativas++;
        printf("\nTentativa %d/%d. Digite seu palpite: ", tentativas, maxTentativas);
        scanf("%d", &palpite);

        if (palpite == numeroSecreto) {
            printf("Parabens! Voce acertou!\n");
            acertou = 1;
        } else if (palpite < numeroSecreto) {
            printf("O numero secreto e maior.\n");
        } else {
            printf("O numero secreto e menor.\n");
        }
    }


    printf("Quantidade de tentativas realizadas: %d\n", tentativas);

    if (!acertou) {
        printf("Suas tentativas acabaram! O numero secreto era: %d\n", numeroSecreto);
    }

    return 0;
}
