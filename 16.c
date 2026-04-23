// QUESTÃO 16 - Verificar se um número é primo

#include <stdio.h>

// Função que verifica se é primo
int ehPrimo(int n) {
    // Processamento

    if (n <= 1) return 0; // não é primo

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0; // encontrou divisor
        }
    }

    return 1; // é primo
}

int main() {
    // Entrada
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Processamento
    if (ehPrimo(numero)) {
        // Saída
        printf("E primo\n");
    } else {
        printf("Nao e primo\n");
    }

    return 0;
}