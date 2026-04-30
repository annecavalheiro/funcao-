// QUESTÃO 6 - Verificar divisibilidade

#include <stdio.h>

int divisivel(int a, int b){
    if(a % b == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if(divisivel(a, b)){
        printf("Divisivel\n");
    }else{
        printf("Nao divisivel\n");
    }

    return 0;
}