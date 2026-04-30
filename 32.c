//32 Escrever um procedimento que determine o conjunto interseção entre dois conjuntos A e B de caracteres.
//Escrever um procedimento que determine o conjunto união entre estes mesmos A e B. Escrever um
//conjunto que leia 50 pares de conjuntos de 100 caracteres cada um, determine e escreva a interseção e
//a união desses conjuntos, utilizando os procedimentos anteriormente definidos.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define TAM 101 // 100 caracteres + \0
#define PARES 50

// Procedimento para remover duplicatas e garantir que é um conjunto
void formatarConjunto(char *conjunto) {
    int i, j, k;
    for (i = 0; conjunto[i] != '\0'; i++) {
        for (j = i + 1; conjunto[j] != '\0'; j++) {
            if (conjunto[j] == conjunto[i]) {
                for (k = j; conjunto[k] != '\0'; k++) {
                    conjunto[k] = conjunto[k + 1];
                }
                j--;
            }
        }
    }
}

// Procedimento para determinar a Interseção (A ∩ B)
void calcularIntersecao(char *A, char *B, char *res) {
    int k = 0;
    for (int i = 0; A[i] != '\0'; i++) {
        for (int j = 0; B[j] != '\0'; j++) {
            if (A[i] == B[j]) {
                res[k++] = A[i];
                break;
            }
        }
    }
    res[k] = '\0';
}

// Procedimento para determinar a União (A U B)
void calcularUniao(char *A, char *B, char *res) {
    strcpy(res, A);
    int lenA = strlen(res);
    int k = lenA;

    for (int i = 0; B[i] != '\0'; i++) {
        bool existe = false;
        for (int j = 0; j < lenA; j++) {
            if (B[i] == res[j]) {
                existe = true;
                break;
            }
        }
        if (!existe) {
            res[k++] = B[i];
        }
    }
    res[k] = '\0';
}

int main() {
    char setA[TAM], setB[TAM];
    char inter[TAM], uniao[TAM * 2]; // União pode ser maior

    for (int p = 1; p <= PARES; p++) {
        printf("\n--- Par %d ---\n", p);
        printf("Digite o conjunto A (até 100 char): ");
        scanf("%s", setA);
        printf("Digite o conjunto B (até 100 char): ");
        scanf("%s", setB);

        // Formata para garantir que sejam conjuntos válidos (sem duplicatas internas)
        formatarConjunto(setA);
        formatarConjunto(setB);

        calcularIntersecao(setA, setB, inter);
        calcularUniao(setA, setB, uniao);

        printf("Conjunto A (formatado): %s\n", setA);
        printf("Conjunto B (formatado): %s\n", setB);
        printf("Intersecao: %s\n", inter);
        printf("Uniao: %s\n", uniao);
    }

    return 0;
}

