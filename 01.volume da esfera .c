#include <stdio.h>
#define PI 3.14159

// Função que calcula o volume da esfera
double volumeEsfera(double raio) {
    double volume;
    volume = (4.0/3.0) * PI * (raio * raio * raio);
    return volume;
}

int main() {
    double raio, resultado;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    resultado = volumeEsfera(raio);

    printf("O volume da esfera e : %f\n", resultado);

    return 0;
}