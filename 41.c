//41. Escreva um programa que leia uma cadeia de caracteres qualquer do usuário (tamanho máximo 60caracteres) 
// e imprima esta cadeia de caracteres centralizada no meio da tela (em modo texto a tela tem 80 colunas).
//Para a impressão da mensagem centralizada, escreva um procedimento que recebe como
//parâmetro a cadeia de caracteres e imprime esta cadeia de caracteres centralizada na tela.

#include <stdio.h>
#include <string.h>

// Procedimento para centralizar
void centralizar(char texto[]) {
    int tamanho = strlen(texto);
    int espacos = (80 - tamanho) / 2;

    // imprime os espaços
    for (int i = 0; i < espacos; i++) {
        printf(" ");
    }

    // imprime o texto
    printf("%s\n", texto);
}

int main() {
    char frase[61]; // até 60 caracteres + \0

    printf("Digite uma frase: ");
    fgets(frase, 61, stdin);

    // remove o ENTER do final (se tiver)
    frase[strcspn(frase, "\n")] = '\0';

    centralizar(frase);

    return 0;
}