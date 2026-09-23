#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    int aprovados = 0, recuperacao = 0, reprovados = 0;
    char opcao;

    do {
        printf("\nDigite as 3 notas do aluno: ");
        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1 + n2 + n3) / 3.0;
        printf("Media: %.2f - ", media);

        if (media >= 7.0) {
            printf("Aprovado\n");
            aprovados++;
        } else if (media >= 5.0) {
            printf("Recuperacao\n");
            recuperacao++;
        } else {
            printf("Reprovado\n");
            reprovados++;
        }

        printf("Deseja cadastrar outro aluno? (S/N): ");
        scanf(" %c", &opcao);

    } while (opcao == 'S' || opcao == 's');
    
    printf(" Aprovados: %d\nRecuperacao: %d\nReprovados: %d\n", aprovados, recuperacao, reprovados);

    return 0;
}
