//30. Escrever um procedimento que calcule o valor aproximado de PI através da série
//Deverá ser fornecido ao procedimento o número de termos da série para o cálculo de Pi. Escrever um
//programa que, fornecendo ao procedimento, sucessivamente, o número de termos (1,2,3,...,n), escreva
//uma tabela com o valor aproximado de Pi e o número de termos utilizados. O valor de n deverá ser lido.

#include <stdio.h>

// PROCEDIMENTO: calcula PI com n termos
void calculaPi(int n, float *pi) {
    float soma = 0;
    int sinal = 1;

    for (int i = 0; i < n; i++) {
        soma += sinal * (1.0 / (2 * i + 1));
        sinal *= -1; // alterna + e -
    }

    *pi = 4 * soma;
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("\nTabela de aproximacao de PI:\n");
    printf("Termos\tValor de PI\n");

    for (int i = 1; i <= n; i++) {
        float pi;

        calculaPi(i, &pi);

        printf("%d\t%.6f\n", i, pi);
    }

    return 0;
}