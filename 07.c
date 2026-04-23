// QUESTÃO 7 - Arredondamento de número real para inteiro

#include <stdio.h>

// Função de arredondamento
int arredondar(float num) {
    // Processamento
    int inteiro = (int) num; // parte inteira
    float decimal = num - inteiro;

    if (decimal >= 0.5) {
        return inteiro + 1; // arredonda pra cima
    } else if (decimal <= -0.5) {
        return inteiro - 1; // caso negativo
    } else {
        return inteiro; // mantém
    }
}

int main() {
    // Entrada
    float numero;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    // Processamento
    int resultado = arredondar(numero);

    // Saída
    printf("Numero arredondado: %d\n", resultado);

    return 0;
}