//46. Escreva um procedimento que receba um número natural e imprima os três primeiros caracteres do dia
//da semana correspondente ao número. Por exemplo,7 corresponde à “SAB”.
//O procedimento deve mostrar uma mensagem de erro caso o número recebido não corresponda à um dia da semana.
//Geretambém um algoritmo que utilize esse procedimento, chamando-o, mas antes lendo um valor para passagem de parâmetro.

#include <stdio.h>

// Procedimento que imprime o dia abreviado
void diaSemana(int num) {
    switch (num) {
        case 1: printf("DOM\n"); break;
        case 2: printf("SEG\n"); break;
        case 3: printf("TER\n"); break;
        case 4: printf("QUA\n"); break;
        case 5: printf("QUI\n"); break;
        case 6: printf("SEX\n"); break;
        case 7: printf("SAB\n"); break;
        default: printf("Erro: numero invalido!\n");
    }
}

int main() {
    int valor;

    printf("Digite um numero (1 a 7): ");
    scanf("%d", &valor);

    diaSemana(valor);

    return 0;
} 