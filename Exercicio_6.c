#include <stdio.h>

int main(void) {
    int matriz[2][2];
    int  l, p;

    for (l = 0; l < 2; l++) {
        for (p = 0; p < 2; p++) {
            printf("Digite o valor para a posição [%d][%d]: ", l+1, p+1);
            scanf("%d", &matriz[l][p]);
        }
    }

    printf("\nA matriz 2x2 é:\n");
    for (l = 0; l < 2; l++) {
        for (p = 0; p < 2; p++) {
            printf("%d ", matriz[l][p]);
        }
        printf("\n");
    }

    return 0;
}