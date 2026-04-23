#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprime_log(float x) {
    if (x <= 0) {
        return; // termina a função se x for inválido
    }
    printf("Log: %f\n", log(x));
}

int main() {
    float x;

    printf("Digite x: ");
    scanf("%f", &x);

    imprime_log(x);

    system("pause");
    return 0;
}