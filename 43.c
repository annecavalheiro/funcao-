//43. Escreva um procedimento que receba um número inteiro e o imprima na forma extensa. Por exemplo,
//para 1 a saída desejada é “Um”. A função deve ser capaz de gerar o extenso dos números de 0 até 10,
//inclusive. Caso um número não compatível seja recebido o procedimento deve mostrar uma mensagem de erro.
//Crie também um algoritmo que leia um valor inteiro e chame o procedimento criado acima para a impressão do número extenso.

#include <stdio.h>

// Procedimento que imprime o número por extenso
void numeroExtenso(int num) {
    switch (num) {
        case 0: printf("Zero\n"); break;
        case 1: printf("Um\n"); break;
        case 2: printf("Dois\n"); break;
        case 3: printf("Tres\n"); break;
        case 4: printf("Quatro\n"); break;
        case 5: printf("Cinco\n"); break;
        case 6: printf("Seis\n"); break;
        case 7: printf("Sete\n"); break;
        case 8: printf("Oito\n"); break;
        case 9: printf("Nove\n"); break;
        case 10: printf("Dez\n"); break;
        default: printf("Erro: numero invalido!\n");
    }
}

// Programa principal
int main() {
    int valor;

    printf("Digite um numero de 0 a 10: ");
    scanf("%d", &valor);

    numeroExtenso(valor);

    return 0;
}