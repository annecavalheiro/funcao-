#include <stdio.h>

// função que converte Fahrenheit para Celsius
double converter(double f) {
    return (5.0/9.0) * (f - 32);
}

int main() {
    double f;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &f);

    printf("Em Celsius: %.2lf\n", converter(f));

    return 0;
}