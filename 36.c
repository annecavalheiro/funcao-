//36. Escreva uma função que lê um caracter do usuário e retorna este caracter somente se ele for igual a 'S'
//ou 'N'. Se o caracter não for nem 'S' nem 'N', a função imprime a mensagem 'Caracter inválido. Digite
//novamente'. Use esta função em um programa que fica lendo do usuário um número qualquer e
//imprime este número ao cubo na tela. O programa deve ficar lendo os números até o usuário responder
//'N' à pergunta se ele deseja continuar ou não.

#include <stdio.h>

// Função que lê S ou N
char lerSN() {
    // Processamento
    char c;

    do {
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &c);

        if (c != 'S' && c != 'N') {
            printf("Caracter invalido. Digite novamente\n");
        }

    } while (c != 'S' && c != 'N');

    return c; // Saída
}

int main() {
    // Entrada
    int num;
    char resp;

    // Processamento
    resp = 'S';

    while (resp == 'S') {

        printf("Digite um numero: ");
        scanf("%d", &num);

        // Saída
        printf("Cubo: %d\n", num * num * num);

        resp = lerSN();
    }

    return 0;
}