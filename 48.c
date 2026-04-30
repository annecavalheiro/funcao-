//48. Escreva uma função que receba dois números inteiros x e y.
//Essa função deve verificar se x é divisívelpor y.
//No caso positivo, a função deve retornar 1, caso contrário zero.
//Escreva também um algoritmo para testar tal função.

#include <stdio.h>

// Função que verifica se x é divisível por y
int divisivel(int x, int y) {
    if (y == 0) {
        return 0; // evita divisão por zero
    }

    if (x % y == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x, y;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    if (divisivel(x, y) == 1) {
        printf("E divisivel\n");
    } else {
        printf("Nao e divisivel\n");
    }

    return 0;
}