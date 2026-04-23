// QUESTÃO 14 - Somatória dos n primeiros números

#include <stdio.h>

// Função que calcula a somatória
int somatoria(int n) {
    // Processamento
    int soma = 0;

    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    return soma; // Saída
}

int main() {
    // Entrada
    int n;

    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &n);
    } while (n <= 0);

    // Processamento
    int resultado = somatoria(n);

    // Saída
    printf("Somatoria de 1 ate %d = %d\n", n, resultado);

    return 0;
}