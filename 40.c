//40. Escreva um programa composto de uma função Max e o programa principal como segue:
//a) A função Max recebe como parâmetros de entrada dois números inteiros e retorna o maior.Se forem iguais retorna qualquer um deles;
//b) O programa principal lê 4 séries de 4 números a,b,c e d. Para cada série lida imprime o maior dos quatro números usando a função Max.

#include <stdio.h>

// Função que retorna o maior entre dois números
int Max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int a, b, c, d;
    int i, maior;

    // Lê 4 séries de números
    for (i = 1; i <= 4; i++) {
        printf("Serie %d\n", i);
        printf("Digite 4 numeros: ");
        scanf("%d %d %d %d", &a, &b, &c, &d);

        // Usando a função Max para achar o maior dos 4
        maior = Max(a, b);
        maior = Max(maior, c);
        maior = Max(maior, d);

        printf("Maior numero: %d\n\n", maior);
    }

    return 0;
}