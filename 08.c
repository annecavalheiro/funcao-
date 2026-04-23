// QUESTÃO 8 - Número por extenso

#include <stdio.h>

char *unidades[] = {"", "um", "dois", "tres", "quatro", "cinco",
                    "seis", "sete", "oito", "nove", "dez",
                    "onze", "doze", "treze", "quatorze", "quinze",
                    "dezesseis", "dezessete", "dezoito", "dezenove"};

char *dezenas[] = {"", "", "vinte", "trinta", "quarenta",
                   "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};

char *centenas[] = {"", "cento", "duzentos", "trezentos", "quatrocentos",
                    "quinhentos", "seiscentos", "setecentos", "oitocentos", "novecentos"};

// Função para números até 999
void escreve(int n) {
    // Processamento e Saída

    if (n == 100) {
        printf("cem");
        return;
    }

    if (n >= 100) {
        printf("%s", centenas[n / 100]);
        if (n % 100 != 0) {
            printf(" e ");
            escreve(n % 100);
        }
        return;
    }

    if (n >= 20) {
        printf("%s", dezenas[n / 10]);
        if (n % 10 != 0) {
            printf(" e %s", unidades[n % 10]);
        }
        return;
    }

    if (n > 0) {
        printf("%s", unidades[n]);
    }
}

int main() {
    // Entrada
    int numero;

    printf("Digite um numero ate 999: ");
    scanf("%d", &numero);

    // Processamento e Saída
    escreve(numero);

    printf("\n");

    return 0;
}