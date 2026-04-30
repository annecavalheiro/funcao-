//50. Criar uma função que determine se um caractere, recebido como parâmetro, é ou não uma letra do alfabeto.
//A função deve retornar 1 caso positivo e 0 em caso contrário. Escreva também um algoritmo para testar tal função.

#include <stdio.h>

// Função que verifica se é letra
int ehLetra(char c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere); // espaço antes do %c evita erro

    if (ehLetra(caractere) == 1) {
        printf("E uma letra\n");
    } else {
        printf("Nao e uma letra\n");
    }

    return 0;
}