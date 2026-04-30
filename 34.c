//34. Fazer um procedimento que, recebendo como parâmetro dois conjuntos de números inteiros, contendo
//a interseção dos dois conjuntos recebidos e o tamanho desse novo conjunto formado.
//Fazer um procedimento que, recebendo como parâmetro um número inteiro, devolva ao módulo
//principal um conjunto de números inteiros, contendo todos os divisores do número recebido e o
//tamanho desse conjunto.
//Fazer um programa que:
// Leia um conjunto de 30 pares de números inteiros;
// Escrevam para cada par de números lidos, os seus valores e os seus divisores comuns, fazendo uso dos procedimentos anteriormente definidos.

#include <stdio.h>

// Função que pega os divisores de um número
void divisores(int n, int v[], int *tam) {
    // Processamento
    *tam = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            v[*tam] = i;
            (*tam)++;
        }
    }
}

// Função que faz a interseção
void intersecao(int v1[], int t1, int v2[], int t2, int v3[], int *t3) {
    // Processamento
    *t3 = 0;

    for (int i = 0; i < t1; i++) {
        for (int j = 0; j < t2; j++) {
            if (v1[i] == v2[j]) {
                v3[*t3] = v1[i];
                (*t3)++;
            }
        }
    }
}

int main() {
    // Entrada
    int a, b;

    for (int k = 0; k < 30; k++) {

        printf("Digite dois numeros: ");
        scanf("%d %d", &a, &b);

        int d1[100], d2[100], comum[100];
        int t1, t2, t3;

        // Processamento
        divisores(a, d1, &t1);
        divisores(b, d2, &t2);

        intersecao(d1, t1, d2, t2, comum, &t3);

        // Saída
        printf("Divisores comuns: ");
        for (int i = 0; i < t3; i++) {
            printf("%d ", comum[i]);
        }
        printf("\n\n");
    }

    return 0;
}