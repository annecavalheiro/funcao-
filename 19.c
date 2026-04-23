// QUESTÃO 19 - Sistema de avaliação de alunos

#include <stdio.h>

// Função para somar os 3 maiores valores
int soma3Maiores(int a, int b, int c, int d) {
    // Processamento

    int menor = a;

    if (b < menor) menor = b;
    if (c < menor) menor = c;
    if (d < menor) menor = d;

    return (a + b + c + d - menor); // remove o menor
}

// Função para determinar conceito
char conceito(int nota) {
    // Processamento
    if (nota >= 90) return 'A';
    else if (nota >= 80) return 'B';
    else if (nota >= 70) return 'C';
    else if (nota >= 60) return 'D';
    else if (nota >= 40) return 'E';
    else return 'F';
}

int main() {
    // Entrada
    int numAluno;
    int n1, n2, n3, n4, final;

    for (int i = 0; i < 80; i++) {

        printf("\nAluno %d\n", i + 1);

        printf("Numero do aluno: ");
        scanf("%d", &numAluno);

        printf("Notas das 4 provas: ");
        scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

        printf("Nota da prova final: ");
        scanf("%d", &final);

        // Processamento
        int soma = soma3Maiores(n1, n2, n3, n4);
        int notaFinal = soma + final;

        char conc = conceito(notaFinal);

        // Saída
        printf("Aluno: %d\n", numAluno);
        printf("Nota final: %d\n", notaFinal);
        printf("Conceito: %c\n", conc);
    }

    return 0;
}