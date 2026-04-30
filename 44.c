//44. Escreva um procedimento que gere um cabeçalho para um relatório. Esse procedimento deve receber
//um literal (string, ou cadeia de caracteres) como parâmetro. O cabeçalho tem a seguinte forma:
//============================================
//Universidade Virtual do Aprendizado
//ICEx – Instituto de Ciências Exatas
//Disciplina de Programação de Computadores
//Nome:
//Fulano de Tal
//============================================
//onde Fulano de Tal, corresponde ao parâmetro passado.

#include <stdio.h>

// Procedimento que imprime o cabeçalho
void cabecalho(char nome[]) {
    printf("============================================\n");
    printf("Universidade Virtual do Aprendizado\n");
    printf("ICEx - Instituto de Ciencias Exatas\n");
    printf("Disciplina de Programacao de Computadores\n");
    printf("Nome:\n");
    printf("%s\n", nome);
    printf("============================================\n");
}

int main() {
    char nome[60];

    printf("Digite seu nome: ");
    fgets(nome, 60, stdin);

    // remove o ENTER do final
    nome[strcspn(nome, "\n")] = '\0';

    cabecalho(nome);

    return 0;
}