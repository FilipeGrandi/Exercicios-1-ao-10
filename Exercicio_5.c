#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[35];
    float altura;
    int idade;
};

int main() {
    struct Pessoa p1;

    strcpy(p1.nome, "Glauber Ribeiro Zanin");
    p1.idade = 20;
    p1.altura = 1.77;

    printf("Nome da pessoa: %s\n", p1.nome);
    printf("Altura da pessoa: %.2fm\n", p1.altura);
    printf("Idade da pessoa: %d\n", p1.idade);

    return 0;
}