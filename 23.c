// QUESTÃO 23 - Diferença entre datas no mesmo ano

#include <stdio.h>

// Função para verificar ano bissexto
int bissexto(int ano) {
    // Processamento
    return (ano % 4 == 0);
}

// Função para retornar dias do mês
int diasMes(int mes, int ano) {
    // Processamento
    if (mes == 2) {
        if (bissexto(ano)) return 29;
        else return 28;
    }

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        return 30;

    return 31;
}

// Procedimento QuantosDias
int QuantosDias(int dia, int mes, int ano) {
    // Processamento
    int total = dia;

    for (int i = 1; i < mes; i++) {
        total += diasMes(i, ano);
    }

    return total; // Saída
}

// Função para validar data
int dataValida(int dia, int mes, int ano) {
    // Processamento

    if (mes < 1 || mes > 12) return 0;

    if (dia < 1 || dia > diasMes(mes, ano)) return 0;

    return 1;
}

int main() {
    // Entrada
    int d1, m1, a1;
    int d2, m2, a2;

    while (1) {
        printf("\nDigite duas datas (dd mm aaaa dd mm aaaa) ou 0 0 0 0 0 0 para sair:\n");
        scanf("%d %d %d %d %d %d", &d1, &m1, &a1, &d2, &m2, &a2);

        if (d1 == 0 && m1 == 0 && a1 == 0 &&
            d2 == 0 && m2 == 0 && a2 == 0) {
            break;
        }

        // Processamento
        if (!dataValida(d1, m1, a1) || !dataValida(d2, m2, a2) || a1 != a2) {
            // Saída erro
            printf("Data incorreta: %d/%d/%d e %d/%d/%d\n", d1, m1, a1, d2, m2, a2);
        } else {

            int dias1 = QuantosDias(d1, m1, a1);
            int dias2 = QuantosDias(d2, m2, a2);

            int diferenca = dias1 - dias2;
            if (diferenca < 0) diferenca = -diferenca;

            // Saída
            printf("Datas: %d/%d/%d e %d/%d/%d\n", d1, m1, a1, d2, m2, a2);
            printf("Diferenca em dias: %d\n", diferenca);
        }
    }

    return 0;
}