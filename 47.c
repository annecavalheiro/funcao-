//47. Escreva uma função que receba um número inteiro. Esta função deve verificar se tal número é primo.
//No caso positivo, a função deve retornar 1, caso contrário zero. Escreva também um algoritmo para testar tal função.

#include <stdio.h>

// Função que verifica se é primo
int ehPrimo(int n) {
    int i;

    if (n <= 1) {
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (ehPrimo(num) == 1) {
        printf("E primo\n");
    } else {
        printf("Nao e primo\n");
    }

    return 0;
}