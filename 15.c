// QUESTÃO 15 - Calcular diferença em horas entre duas datas

#include <stdio.h>

// Função para converter data em horas
int calcularHoras(int dia, int mes, int ano) {
    // Processamento (simplificado)

    int dias = dia;

    // Soma dias dos meses anteriores (considerando meses com 30 dias)
    dias += (mes - 1) * 30;

    // Soma dias dos anos
    dias += ano * 365;

    // Converter para horas
    return dias * 24;
}

int main() {
    // Entrada
    int d1, m1, a1;
    int d2, m2, a2;

    printf("Digite a primeira data (dd mm aaaa): ");
    scanf("%d %d %d", &d1, &m1, &a1);

    printf("Digite a segunda data (dd mm aaaa): ");
    scanf("%d %d %d", &d2, &m2, &a2);

    // Processamento
    int horas1 = calcularHoras(d1, m1, a1);
    int horas2 = calcularHoras(d2, m2, a2);

    int diferenca = horas1 - horas2;

    if (diferenca < 0) {
        diferenca = -diferenca;
    }

    // Saída
    printf("Diferenca em horas: %d\n", diferenca);

    return 0;
}