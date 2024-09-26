#include <stdio.h>
int main(){
    int V;
    printf("Digite um valor inteiro: ");
    scanf("%d", &V);
    if(V%2==0){
        printf("O valor é par");
    }else {
        printf("O valor é impar");
    }
    return 0;
}
