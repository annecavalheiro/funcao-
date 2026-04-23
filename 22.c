// QUESTAO 22 - FREQUENCIA DE DADOS

//Fazer um procedimento que, dados N números, determine o número que apareceu mais vezes. Supor
//que os valores possíveis de cada número estão entre 1 e 6, inclusive, e que sempre haverá um único
//número vencedor.
//Sabendo-se que um jogo de dados ocorre 40 vezes por dia e que a cada dia é digitada uma linha
//contendo os 40 números que saíram, fazer um programa que:
// leia os dados contidos em 30 linhas, correspondentes a um mês de jogo;
// escreva este número e a mensagem “Resultado Diário”.;
// verifique também qual o número ganhador do mês;
// escreva este número e a mensagem “Resultado mensal do jogo”.

#include <stdio.h>

// Função para achar o número mais frequente
int maisFrequente(int v[], int tamanho) {
    int cont[7] = {0};

    for (int i = 0; i < tamanho; i++) {
        cont[v[i]]++;
    }

    int maior = 1;
    for (int i = 2; i <= 6; i++) {
        if (cont[i] > cont[maior]) {
            maior = i;
        }
    }

    return maior;
}

int main() {
    int dados[40];
    int vencedorMes[7] = {0};

    for (int dia = 1; dia <= 30; dia++) {

        printf("\nDia %d: Digite 40 numeros (de 1 a 6):\n", dia);

        for (int i = 0; i < 40; i++) {
            scanf("%d", &dados[i]);
        }

        int vencedor = maisFrequente(dados, 40);

        printf("%d - Resultado Diario\n", vencedor);

        vencedorMes[vencedor]++;
    }

    int maiorMes = 1;
    for (int i = 2; i <= 6; i++) {
        if (vencedorMes[i] > vencedorMes[maiorMes]) {
            maiorMes = i;
        }
    }

    printf("\n%d - Resultado mensal do jogo\n", maiorMes);

    return 0;
}