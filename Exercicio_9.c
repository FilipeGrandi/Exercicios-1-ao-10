#include <stdio.h>

int main(void) {
    int numero, j;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    printf("Tabuada do %d:\n", numero);

    for (j = 1; j <= 10; j++) {
        printf ("%d x %d = %d\n", numero, j, numero * j);
    }

    return 0;
}