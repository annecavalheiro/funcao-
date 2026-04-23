// QUESTÃO 9 - Verificar divisibilidade sem usar o operador %

#include <stdio.h>

// Função que verifica divisibilidade sem usar %
int divisivel(int a, int b) {
    // Processamento

    if (b == 0) {
        return 0; // não existe divisão por zero
    }

    int quociente = a / b;

    if (b * quociente == a) {
        return 1; // é divisível
    } else {
        return 0; // não é divisível
    }
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