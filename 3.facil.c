// QUESTÃO 3 - Contagem regressiva

#include <stdio.h>

// Função de contagem
void contagem(int inicio, int intervalo) {
    // Processamento e Saída
    for (int i = inicio; i >= 0; i--) {
        printf("%d\n", i);

        for (int j = 0; j < intervalo * 100000000; j++);
    }
}

int main() {
    // Entrada
    int numero, intervalo;

    printf("Digite o numero inicial: ");
    scanf("%d", &numero);

    printf("Digite o intervalo: ");
    scanf("%d", &intervalo);

    // Processamento
    contagem(numero, intervalo);

    return 0;
}