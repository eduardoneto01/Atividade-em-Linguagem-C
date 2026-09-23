#include <stdio.h>

//Passos diários
int main() {
    int passos, totalPassos = 0, horas = 0;

	//Peço a quantidade de passos a cada hora até atingir a meta diaria.
    while (totalPassos < 10000) {
        horas++;
        printf("Digite os passos da hora %d: ", horas);
        scanf("%d", &passos);
        totalPassos += passos;
    }

    printf("\nMeta de 10.000 passos atingida!\n");
    printf("Total de passos: %d\n", totalPassos);
    printf("Horas necessarias: %d hora(s)\n", horas);

    return 0;
}
