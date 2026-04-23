// QUESTÃO 17 - Somar números primos de um conjunto

#include <stdio.h>

// Função para verificar se é primo
int ehPrimo(int n) {
    // Processamento
    if (n <= 1) return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

// Função para somar primos
int somaPrimos(int n) {
    // Entrada
    int num, soma = 0;

    // Processamento
    for (int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (ehPrimo(num)) {
            soma += num;
        }
    }

    return soma; // Saída
}

int main() {
    // Entrada
    int n;

    printf("Quantos numeros deseja informar? ");
    scanf("%d", &n);

    // Processamento
    int resultado = somaPrimos(n);

    // Saída
    printf("Somatoria dos primos: %d\n", resultado);

    return 0;
}