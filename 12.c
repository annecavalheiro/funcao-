// QUESTÃO 12 - Escrever data por extenso

#include <stdio.h>

// Função para retornar o nome do mês
char* nomeMes(int mes) {
    // Processamento
    switch (mes) {
        case 1: return "janeiro";
        case 2: return "fevereiro";
        case 3: return "marco";
        case 4: return "abril";
        case 5: return "maio";
        case 6: return "junho";
        case 7: return "julho";
        case 8: return "agosto";
        case 9: return "setembro";
        case 10: return "outubro";
        case 11: return "novembro";
        case 12: return "dezembro";
        default: return "mes invalido";
    }
}

// Função para verificar se a data é válida
int dataValida(int dia, int mes, int ano) {
    // Processamento

    if (mes < 1 || mes > 12) return 0;

    if (dia < 1) return 0;

    if (mes == 2) {
        if (dia > 29) return 0;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia > 30) return 0;
    } else {
        if (dia > 31) return 0;
    }

    return 1;
}

int main() {
    // Entrada
    int dia, mes, ano;

    printf("Digite a data (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    // Processamento
    if (dataValida(dia, mes, ano)) {
        // Saída
        printf("%d de %s de %d\n", dia, nomeMes(mes), ano);
    } else {
        printf("Data invalida!\n");
    }

    return 0;
}