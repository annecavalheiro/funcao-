//35. Escrever uma função recursiva Potencia, que recebe uma base e um expoente inteiro e retorna o valor
//da base elevada ao expoente. Escrever também um programa para testar esta função.

#include <stdio.h>

// Função recursiva de potência
int potencia(int base, int exp) {
    // Condição de parada
    if (exp == 0) {
        return 1;
    }

    // Processamento
    return base * potencia(base, exp - 1);
}

int main() {
    // Entrada
    int base, expoente;

    printf("Digite base e expoente: ");
    scanf("%d %d", &base, &expoente);

    // Processamento
    int resultado = potencia(base, expoente);

    // Saída
    printf("Resultado: %d\n", resultado);

    return 0;
}