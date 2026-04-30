//42. Escreva um procedimento que receba um número inteiro e imprima o mês correspondente ao número.
//Por exemplo, 2 corresponde à “fevereiro”.
//O procedimento deve mostrar uma mensagem de erro caso o número recebido não faça sentido.
//Gere também um algoritmo que leia um valor e chame o procedimento criado.

#include <stdio.h>

// Procedimento que imprime o mês
void mostraMes(int num) {
    switch (num) {
        case 1: printf("Janeiro\n"); break;
        case 2: printf("Fevereiro\n"); break;
        case 3: printf("Marco\n"); break;
        case 4: printf("Abril\n"); break;
        case 5: printf("Maio\n"); break;
        case 6: printf("Junho\n"); break;
        case 7: printf("Julho\n"); break;
        case 8: printf("Agosto\n"); break;
        case 9: printf("Setembro\n"); break;
        case 10: printf("Outubro\n"); break;
        case 11: printf("Novembro\n"); break;
        case 12: printf("Dezembro\n"); break;
        default: printf("Erro: numero invalido!\n");
    }
}

int main() {
    int valor;

    printf("Digite um numero (1 a 12): ");
    scanf("%d", &valor);

    mostraMes(valor);

    return 0;
}