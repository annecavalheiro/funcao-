#include <stdio.h>

// função que calcula o volume
double volumeEsfera(double raio){
    double volume;

    volume = (4.0/3.0) * 3.14 * raio * raio * raio;

    return volume;
}

int main(){
    double raio, resultado;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    resultado = volumeEsfera(raio);

    printf("Volume da esfera: %.2lf\n", resultado);

    return 0;
}