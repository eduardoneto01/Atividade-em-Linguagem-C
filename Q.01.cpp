#include <stdio.h>

//Consumo de água do bairro!
int main() {
    float consumo, somaTotal = 0;
	
	//Faço o loop para digitar o valor de 5 moradores.
    for (int i = 1; i <= 5; i++) {
        printf("Digite o consumo do morador %d (m3): ", i);
        scanf("%f", &consumo);

        somaTotal += consumo;
		
		//Agora confirmo se o consumo está dentro ou fora da media, após isso faço a media geral e encerro o programa.
        if (consumo <= 20) {
            printf("Consumo dentro da media.\n");
        } else {
            printf("Consumo acima da media.\n");
        }
    }

    printf("\nConsumo medio geral: %.2f m3\n", somaTotal / 5.0);

    return 0;
}
