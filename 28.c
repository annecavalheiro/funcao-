// 28 Escreve um procedimento que calcule a distância entre dois vetores: 
//[ , , , ] [ , , , ]
//1 2 n 1 2 n X  x x  x e Y  y y  y
//Escrever um programa que, utilizando o procedimento anterior, calcule e escreva a distância entre m pares de vetores. O valor de M será fornecido.

#include <stdio.h>
#include <math.h>

// PROCEDIMENTO: calcula a distância entre dois vetores
float distancia(int n, float x[], float y[]) {
    float soma = 0;

    for (int i = 0; i < n; i++) {
        soma += pow(x[i] - y[i], 2);
    }

    return sqrt(soma);
}

int main() {
    int m, n;

    printf("Quantos pares de vetores? ");
    scanf("%d", &m);

    printf("Digite a dimensão dos vetores: ");
    scanf("%d", &n);

    float x[n], y[n];

    for (int k = 1; k <= m; k++) {

        printf("\nPar %d:\n", k);

        printf("Digite os valores do vetor X:\n");
        for (int i = 0; i < n; i++) {
            scanf("%f", &x[i]);
        }

        printf("Digite os valores do vetor Y:\n");
        for (int i = 0; i < n; i++) {
            scanf("%f", &y[i]);
        }

        float d = distancia(n, x, y);

        printf("Distancia = %.2f\n", d);
    }

    return 0;
}