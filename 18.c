// QUESTÃO 18 - Somatório dos n primeiros termos de Fibonacci

#include <stdio.h>

// Função que calcula a soma da sequência
int somaFibonacci(int n) {
    // Processamento

    int a = 0, b = 1, prox;
    int soma = 0;

    for (int i = 0; i < n; i++) {
        soma += a;

        prox = a + b;
        a = b;
        b = prox;
    }

    return soma;
}

int main() {
    // Entrada
    int n;

    do {
        printf("Digite a quantidade de termos: ");
        scanf("%d", &n);
    } while (n <= 0);

    // Processamento
    int resultado = somaFibonacci(n);

    // Saída
    printf("Somatoria dos %d primeiros termos: %d\n", n, resultado);

    return 0;
}