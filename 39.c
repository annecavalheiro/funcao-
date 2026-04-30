//39. Escreva um programa que lê um valor inteiro (maior do que 1 e menor ou igual a 10) e exibe a tabuada
//(até 10) de multiplicação do número lido. Você deverá escrever as seguintes funções e procedimentos:
//int function LeNumero(n1,n2:integer);
//Lê um número inteiro no intervalo especificado (n1,n2) e o retorna. Cada vez que for digitado um número
//inválido (fora do intervalo especificado) a função deve exibir a mensagem "Número inválido. Digitenovamente!"function Tabuada( n:integer );
//Recebe como parâmetro um número inteiro e exibe na tela a tabuada de multiplicação até 10 do número lido.

#include <stdio.h>

// Função que lê número válido
int LeNumero(int n1, int n2) {
    // Processamento
    int num;

    do {
        printf("Digite um numero entre %d e %d: ", n1, n2);
        scanf("%d", &num);

        if (num <= n1 || num > n2) {
            printf("Numero invalido. Digite novamente!\n");
        }

    } while (num <= n1 || num > n2);

    return num; // Saída
}

// Função que mostra a tabuada
void Tabuada(int n) {
    // Processamento e Saída
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    // Entrada
    int numero;

    // Processamento
    numero = LeNumero(1, 10);

    // Saída
    Tabuada(numero);

    return 0;
}