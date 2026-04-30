//45. Escreva um procedimento que receba um número arábico inteiro e imprima o corresponde número em romano.Por exemplo, para 5 a saída desejada é “V”.
//A função deve ser capaz de gerar o número romano para os 50 primeiros inteiros.
//Uma mensagem de erro deve ser mostrada caso um número fora dessa faixa seja recebido.
//Crie também um algoritmo que leia um valor inteiro e chame o procedimento criado acima para a impressão do número romano.

#include <stdio.h>

// Procedimento
void romano(int num) {
    if (num < 1 || num > 50) {
        printf("Erro: numero invalido!\n");
        return;
    }

    int valores[] = {50, 40, 10, 9, 5, 4, 1};
    char *simbolos[] = {"L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 7; i++) {
        while (num >= valores[i]) {
            printf("%s", simbolos[i]);
            num -= valores[i];
        }
    }

    printf("\n");
}

int main() {
    int n;

    printf("Digite um numero (1 a 50): ");
    scanf("%d", &n);

    romano(n);

    return 0;
}
