// QUESTÃO 25 - Calcular o produto de dois números usando multiplicação egípcia

#include <stdio.h>

// Função que realiza a multiplicação egípcia
int multiplicacaoEgipcia(int a, int b) {
    // Processamento
    int resultado = 0;

    while (a > 0) {
        if (a % 2 != 0) { // se for ímpar
            resultado += b;
        }

        a = a / 2; // divide o primeiro número
        b = b * 2; // dobra o segundo número
    }

    return resultado; // Saída
}

int main() {
    // Entrada
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Processamento
    int produto = multiplicacaoEgipcia(num1, num2);

    // Saída
    printf("Produto: %d\n", produto);

    return 0;
}