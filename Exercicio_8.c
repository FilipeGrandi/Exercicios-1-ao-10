#include <stdio.h>

int main() {
    char string[100];
    int count = 0;

    printf("Insira sua palavra: ");
    scanf("%99[^\n]", string);
    while (string[count] != '\0') {
        count++;
    }
    printf("A palavra possui %d caracteres.\n", count);

    return 0;
}