#include <stdio.h>

struct Aluno {
    char nomedoaluno[50];
    int idade;
    float resultadodenotas;
};

int main(void) {
    struct Aluno turma[3];


    for (int i = 0; i < 3; i++) {
        printf("Vamos lá! Me diga o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", turma[i].nomedoaluno);

        printf("Qual a idade do aluno %d? ", i + 1);
        scanf("%d", &turma[i].idade);

        printf("E a nota do aluno %d? ", i + 1);
        scanf("%f", &turma[i].resultadodenotas);
    }


    printf("\nAqui estão as informações da turma:\n");
    for (int i = 0; i < 3; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", turma[i].nomedoaluno);
        printf("Idade: %d anos\n", turma[i].idade);
        printf("Nota: %.2f\n\n", turma[i].resultadodenotas);
    }

    return 0;
}