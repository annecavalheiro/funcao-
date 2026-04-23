//26. Determinar os números inteiros, menores que 5000, são quadrados perfeitos e, também, são capicuas.
//Capicuas são números que tem o mesmo valor se lidos da esquerda para a direita ou da direita para aesquerda.
//Deverão ser escritos os seguintes programas:
// Um módulo principal;
// Uma função que calcule quando algarismos tem um determinado número inteiro;
// Um procedimento para separa um número em n algarismos;
// Um procedimento para formar o número em ordem inversa.

#include <stdio.h>

// FUNÇÃO: conta quantos dígitos o número tem
int contaDigitos(int n) {
    int cont = 0;

    while (n > 0) {
        cont++;
        n = n / 10;
    }

    return cont;
}

// PROCEDIMENTO: separa número em dígitos
void separaDigitos(int n, int v[], int tam) {
    for (int i = tam - 1; i >= 0; i--) {
        v[i] = n % 10;
        n = n / 10;
    }
}

// PROCEDIMENTO: forma número invertido
int inverteNumero(int v[], int tam) {
    int num = 0;

    for (int i = tam - 1; i >= 0; i--) {
        num = num * 10 + v[i];
    }

    return num;
}

int main() {
    int v[10]; // vetor para guardar dígitos

    printf("Numeros menores que 5000 que sao quadrados perfeitos e capicuas:\n\n");

    // gerar quadrados perfeitos menores que 5000
    for (int i = 1; i * i < 5000; i++) {

        int num = i * i;

        int tam = contaDigitos(num);

        separaDigitos(num, v, tam);

        int inverso = inverteNumero(v, tam);

        if (num == inverso) {
            printf("%d\n", num);
        }
    }

    return 0;
}