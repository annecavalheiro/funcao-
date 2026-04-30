//37. Escreva uma função que recebe 2 números inteiros n1 e n2 como entrada e retorna a soma de todos os
//números inteiros contidos no intervalo [n1,n2]. Use esta função num programa que lê n1 e n2 do usuário e imprime a soma.

#include <stdio.h>

// Função que calcula a soma no intervalo
int somaIntervalo(int n1, int n2) {
    // Processamento
    int soma = 0;

    if (n1 <= n2) {
        for (int i = n1; i <= n2; i++) {
            soma += i;
        }
    } else {
        for (int i = n2; i <= n1; i++) {
            soma += i;
        }
    }

    return soma; // Saída
}

int main() {
    // Entrada
    int n1, n2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    // Processamento
    int resultado = somaIntervalo(n1, n2);

    // Saída
    printf("Soma = %d\n", resultado);

    return 0;
}