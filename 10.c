// QUESTÃO 10 - Calcular o MDC de dois números

#include <stdio.h>

// Função que calcula o MDC
int mdc(int a, int b) {
    // Processamento

    int resto;

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    return a; // Saída
}

int main() {
    // Entrada
    int num1, num2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    // Processamento
    int resultado = mdc(num1, num2);

    // Saída
    printf("MDC = %d\n", resultado);

    return 0;
}