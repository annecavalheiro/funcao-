// QUESTÃO 6 - Verificar divisibilidade

#include <stdio.h>

// Função que verifica divisibilidade
int divisivel(int a, int b) {
    // Processamento
    if (b == 0) return 0;
    return (a % b == 0);
}

int main() {
    // Entrada
    int num1, num2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    // Processamento
    if (divisivel(num1, num2)) {
        // Saída
        printf("Eh divisivel\n");
    } else {
        printf("Nao eh divisivel\n");
    }

    return 0;
}