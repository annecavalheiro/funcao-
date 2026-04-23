//31. Escrever um procedimento que calcule o valor aproximado de e através da série:
//O número de termos da série deverá ser fornecido ao procedimento como parâmetro.
//Escrever um programa que, fornecendo ao procedimento, sucessivamente, o número de termos da
//série necessário para calcular o valor aproximado de e, cuja diferença em relação ao valor obtido
//através da função Exp(1) seja menor que 0,0001.

#include <stdio.h>
#include <math.h>

// PROCEDIMENTO: calcula e com n termos
void calculaE(int n, float *e) {
    float soma = 1.0; // começa com 1
    float fatorial = 1.0;

    for (int i = 1; i < n; i++) {
        fatorial *= i;          // calcula i!
        soma += 1.0 / fatorial; // soma 1/i!
    }

    *e = soma;
}

int main() {
    float e_aprox, e_real;
    int n = 1;

    e_real = exp(1); // valor real de e

    printf("Valor real de e: %.6f\n\n", e_real);
    printf("Termos\tAprox e\t\tErro\n");

    while (1) {
        calculaE(n, &e_aprox);

        float erro = fabs(e_real - e_aprox);

        printf("%d\t%.6f\t%.6f\n", n, e_aprox, erro);

        if (erro < 0.0001) {
            break;
        }

        n++;
    }

    return 0;
}