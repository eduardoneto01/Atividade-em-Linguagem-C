#include <stdio.h>

//COFRINHO DIGITAL
int main() {
    float moeda, total = 0;

    printf("COFRINHO DIGITAL\n ");
    printf("Moedas aceitas: 0.50, 1.00, 2.00\n");
    printf("Digite qualquer outro valor para encerrar.\n\n");

    do {
        printf("Insira uma moeda: R$ ");
        scanf("%f", &moeda);
		
		//Declaro quais valores são aceitos, caso contrário, encerro o programa.
        if (moeda == 0.50 || moeda == 1.00 || moeda == 2.00) {
            total += moeda;
            printf("Moeda adicionada! Saldo atual: R$ %.2f\n", total);
        } else {
            printf("Encerrando insercao de moedas...\n");
            break;
        }
    } while (1);

    printf("\nTotal acumulado no cofrinho: R$ %.2f\n", total);

    return 0;
}
