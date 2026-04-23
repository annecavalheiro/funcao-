//27. Dado o polinômio na forma
//a) Fazer um procedimento que retorne o valor do polinômio e o de sua derivada no ponto x, recebendo
//como parâmetros de entrada a ordem do polinômio, os coeficientes e o x.
//b) Fazer um programa que:
// Leia a ordem do polinômio e os seus respectivos coeficientes;
// Utilizando o procedimento da alínea a, calcule o valor do polinômio e o de sua derivada para
//valores de x. estes valores deverão estar digitados um por linha, sendo que a primeira linha
//deste conjunto de dados contém o número de valores de x a serem lidos;
// Escreva, para cada valor de x lido, o seu valor e o valor correspondente do polinômio e daderivada.

#include <stdio.h>
#include <math.h>

// PROCEDIMENTO: calcula P(x) e P'(x)
void calculaPolinomio(int n, float a[], float x, float *p, float *dp) {
    *p = 0;
    *dp = 0;

    for (int i = 0; i <= n; i++) {
        *p += a[i] * pow(x, i); // P(x)

        if (i > 0) {
            *dp += i * a[i] * pow(x, i - 1); // P'(x)
        }
    }
}

int main() {
    int n;

    printf("Digite a ordem do polinomio: ");
    scanf("%d", &n);

    float a[n + 1];

    printf("Digite os coeficientes (a0 ate a%d):\n", n);
    for (int i = 0; i <= n; i++) {
        scanf("%f", &a[i]);
    }

    int qtd;

    printf("Quantos valores de x deseja testar? ");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++) {
        float x, p, dp;

        printf("\nDigite o valor de x: ");
        scanf("%f", &x);

        calculaPolinomio(n, a, x, &p, &dp);

        printf("x = %.2f | P(x) = %.2f | P'(x) = %.2f\n", x, p, dp);
    }

    return 0;
}