// QUESTÃO 7 - Arredondamento de número real para inteiro

#include <stdio.h>

int arredonda(float n){
    if(n - (int)n >= 0.5){
        return (int)n + 1;
    }else{
        return (int)n;
    }
}

int main(){
    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    printf("Resultado: %d\n", arredonda(n));

    return 0;
}