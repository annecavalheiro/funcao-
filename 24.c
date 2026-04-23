// QUESTÃO 24 - Tradução entre inglês e português

#include <stdio.h>
#include <string.h>

#define MAX 1000
#define TAM 50

// Função para traduzir
void traduzir(char ing[][TAM], char por[][TAM], int n, char tipo, char palavra[]) {
    // Processamento

    for (int i = 0; i < n; i++) {

        if (tipo == 'I') { // inglês -> português
            if (strcmp(palavra, ing[i]) == 0) {
                printf("Traducao: %s\n", por[i]);
                return;
            }
        }

        else if (tipo == 'P') { // português -> inglês
            if (strcmp(palavra, por[i]) == 0) {
                printf("Traducao: %s\n", ing[i]);
                return;
            }
        }
    }

    // Saída caso não encontre
    printf("Palavra nao encontrada\n");
}

int main() {
    // Entrada
    char ingles[MAX][TAM];
    char portugues[MAX][TAM];
    int n;

    printf("Quantas palavras deseja cadastrar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Ingles: ");
        scanf("%s", ingles[i]);

        printf("Portugues: ");
        scanf("%s", portugues[i]);
    }

    char tipo;
    char palavra[TAM];

    while (1) {
        printf("\nDigite I (ingles) ou P (portugues) ou X para sair: ");
        scanf(" %c", &tipo);

        if (tipo != 'I' && tipo != 'P') break;

        printf("Digite a palavra: ");
        scanf("%s", palavra);

        // Processamento e Saída
        traduzir(ingles, portugues, n, tipo, palavra);
    }

    return 0;
}