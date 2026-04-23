// QUESTÃO 5 - Operações com vetor de 100 inteiros usando menu

#include <stdio.h>

#define TAM 100

// Função para preencher o vetor
void preencher(int v[]) {
    // Entrada
    for (int i = 0; i < TAM; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

// Função para somar os elementos
int somatorio(int v[]) {
    // Processamento
    int soma = 0;
    for (int i = 0; i < TAM; i++) {
        soma += v[i];
    }
    return soma; // Saída
}

// Função para calcular média
float media(int v[]) {
    // Processamento
    int soma = somatorio(v);
    return (float)soma / TAM; // Saída
}

// Substituir negativos por zero
void negativosZero(int v[]) {
    // Processamento
    for (int i = 0; i < TAM; i++) {
        if (v[i] < 0) {
            v[i] = 0;
        }
    }
}

// Substituir repetidos por zero (apenas positivos)
void repetidosZero(int v[]) {
    // Processamento
    for (int i = 0; i < TAM; i++) {
        if (v[i] > 0) {
            for (int j = i + 1; j < TAM; j++) {
                if (v[i] == v[j]) {
                    v[j] = 0;
                }
            }
        }
    }
}

// Mostrar vetor
void mostrar(int v[]) {
    // Saída
    printf("Vetor:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int vetor[TAM];
    int opcao;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Preencher vetor\n");
        printf("2 - Somatorio\n");
        printf("3 - Media\n");
        printf("4 - Zerar negativos\n");
        printf("5 - Zerar repetidos positivos\n");
        printf("6 - Mostrar vetor\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                preencher(vetor);
                break;

            case 2:
                printf("Somatorio: %d\n", somatorio(vetor));
                break;

            case 3:
                printf("Media: %.2f\n", media(vetor));
                break;

            case 4:
                negativosZero(vetor);
                printf("Negativos substituidos por zero.\n");
                break;

            case 5:
                repetidosZero(vetor);
                printf("Repetidos substituidos por zero.\n");
                break;

            case 6:
                mostrar(vetor);
                break;

            case 0:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}