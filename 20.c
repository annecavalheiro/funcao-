// QUESTÃO 20 - Avaliação de apostas da LOTO

#include <stdio.h>

// Função para contar acertos
int contarAcertos(int sorteados[], int aposta[], int qtd) {
    // Processamento
    int acertos = 0;

    for (int i = 0; i < qtd; i++) {
        for (int j = 0; j < 5; j++) {
            if (aposta[i] == sorteados[j]) {
                acertos++;
            }
        }
    }

    return acertos; // Saída
}

int main() {
    // Entrada
    int sorteados[5];
    int aposta[10];
    int numAposta, qtd;

    printf("Digite as 5 dezenas sorteadas:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &sorteados[i]);
    }

    int terno = 0, quadra = 0, quina = 0;

    while (1) {
        printf("\nNumero da aposta (0 para sair): ");
        scanf("%d", &numAposta);

        if (numAposta == 0) break;

        printf("Quantidade de dezenas (max 10): ");
        scanf("%d", &qtd);

        printf("Digite as dezenas:\n");
        for (int i = 0; i < qtd; i++) {
            scanf("%d", &aposta[i]);
        }

        // Processamento
        int acertos = contarAcertos(sorteados, aposta, qtd);

        // Saída parcial
        if (acertos >= 3) {
            printf("Aposta %d teve %d acertos\n", numAposta, acertos);
        }

        if (acertos == 3) terno++;
        else if (acertos == 4) quadra++;
        else if (acertos == 5) quina++;
    }

    // Saída final
    printf("\nRESULTADOS:\n");
    printf("Ternos: %d\n", terno);
    printf("Quadras: %d\n", quadra);
    printf("Quinas: %d\n", quina);

    return 0;
}