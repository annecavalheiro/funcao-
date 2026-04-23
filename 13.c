// QUESTÃO 13 - Sorteio de 1000 números e análise

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 1000
#define MAX 101

int main() {
    // Entrada
    int numeros[TAM];
    int frequencia[MAX] = {0};

    // Inicializa aleatoriedade
    srand(time(NULL));

    // Processamento - gerar números
    for (int i = 0; i < TAM; i++) {
        numeros[i] = rand() % 101; // 0 a 100
        frequencia[numeros[i]]++;
    }

    // Encontrar maior e menor número
    int maior = numeros[0];
    int menor = numeros[0];

    for (int i = 1; i < TAM; i++) {
        if (numeros[i] > maior) maior = numeros[i];
        if (numeros[i] < menor) menor = numeros[i];
    }

    // Encontrar mais e menos frequente
    int maisFreq = 0;
    int menosFreq = 0;

    for (int i = 1; i < MAX; i++) {
        if (frequencia[i] > frequencia[maisFreq]) {
            maisFreq = i;
        }
        if (frequencia[i] < frequencia[menosFreq]) {
            menosFreq = i;
        }
    }

    // Saída
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Numero mais sorteado: %d (vezes: %d)\n", maisFreq, frequencia[maisFreq]);
    printf("Numero menos sorteado: %d (vezes: %d)\n", menosFreq, frequencia[menosFreq]);

    return 0;
}