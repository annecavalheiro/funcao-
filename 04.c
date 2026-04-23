// QUESTÃO 4 - Gerar números aleatórios

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar números aleatórios
void aleatorio(int quantidade, int limite) {
    // Processamento
    for (int i = 0; i < quantidade; i++) {
        int num = (rand() % limite) + 1;

        // Saída
        printf("%d ", num);
    }
    printf("\n");
}

int main() {
    // Entrada
    int qtd, limite;

    printf("Quantidade de numeros: ");
    scanf("%d", &qtd);

    printf("Limite maximo: ");
    scanf("%d", &limite);

    srand(time(NULL)); // inicializa aleatoriedade

    // Processamento
    aleatorio(qtd, limite);

    return 0;
}