#include <stdio.h>

//Media de atendimento.
int main() {
    float nota, soma = 0, media;

	//Declaro a quantidade do for, e faço a contagem subindo com o (i++).
    for (int i = 1; i <= 10; i++) {
        printf("Digite a nota do cliente %d (0 a 10): ", i);
        scanf("%f", &nota);
        soma += nota;
    }
	
	//Agora faço as réguas, máxima e minimas.
    media = soma / 10.0;
    printf("Media geral do atendimento: %.2f\n", media);

    if (media < 7) {
        printf("ALERTA: A media do atendimento esta abaixo de 7!\n");
    }

    return 0;
}
