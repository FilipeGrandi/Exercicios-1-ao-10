#include <stdio.h>

int maior ( int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main(void){

    int a,b;

    printf("digite o primeiro numero: ");
    scanf("%d", &a);
    printf("digiite o segundo numero: ");
    scanf("%d", &b);

    printf("o maior numero é: %d", maior(a,b));

    return 0;
}